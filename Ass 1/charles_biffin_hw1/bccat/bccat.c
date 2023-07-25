#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "r");
        int c;
        while ((c = fgetc(file)) != EOF) {
            putchar(c);
        }
        fclose(file);
    }
    return 0;
}