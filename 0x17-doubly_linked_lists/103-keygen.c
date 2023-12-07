#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void generateKey(const char *username, char *key) {
    int i = 0;
    int j = 0;
    int len = 0;
    int tmp = 0;
    int sum = 0;

    while (username[i] != '\0') {
        sum += username[i];
        i++;
    }
    tmp = (sum ^ 0x3afc);
    len = sprintf(key, "%d", tmp);
    while (j < len) {
        key[j] = key[j] + 0x3afc;
        j++;
    }
}

int main(int argc, char **argv) {
    char key[100];

    if (argc != 2) {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }
    generateKey(argv[1], key);
    printf("%s\n", key);
    return 0;
}