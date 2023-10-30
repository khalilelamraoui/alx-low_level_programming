#include"main.h"
/**
 * print_error - Prints an error message to stderr and exits with code 98
 * @message: The error message to be displayed
 * Return: void
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}
/**
 * print_elf_header_info - Displays information from the ELF header
 * @header: Pointer to the ELF header structure
 * Return: void
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%s", header->e_ident[i],
				i < EI_NIDENT - 1 ? " " : "\n");

	printf("  Class:                             %s\n",
			header->e_ident[EI_CLASS] == ELFCLASS64 ?
			"ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			header->e_ident[EI_DATA] == ELFDATA2MSB ?
			"2's complement, big endian" :
			"2's complement, little endian");
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
			header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			header->e_type == ET_NONE ? "NONE (No file type)" :
			header->e_type == ET_REL ? "REL (Relocatable file)" :
			header->e_type == ET_EXEC ? "EXEC (Executable file)" :
			header->e_type == ET_DYN ?
			"DYN (Shared object file)" :
			header->e_type == ET_CORE ?
			"CORE (Core file)" : "N/A");
	printf("  Entry point address:               %lx\n", header->e_entry);
}
/**
 * main - Entry point of the program, reads and prints ELF header info
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, error code 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error(strerror(errno));
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Unable to read ELF header");
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	print_error("File is not an ELF file");
	lseek(fd, 0, SEEK_SET);
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
