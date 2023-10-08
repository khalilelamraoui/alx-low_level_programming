#include"main.h"
/**
 * _realloc - Reallocate a memory block.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: Pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t min_size;

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}
	if (ptr == NULL)
		return malloc(new_size);
	if (new_size == old_size)
		return ptr;
	new_ptr = malloc(new_size);

	if (new_ptr)
	{
		min_size = (old_size < new_size) ? old_size : new_size;
		memcpy(new_ptr, ptr, min_size);
		free(ptr);
	}
	return new_ptr;
}
