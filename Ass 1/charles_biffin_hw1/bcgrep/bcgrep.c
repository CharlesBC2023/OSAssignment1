#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINE 10000

int main(int argc, char *argv[]){
	if (argc != 3) {
 	   printf("Usage: find pattern  %d \n", argc);
	   exit(1);
	}
	FILE *file = fopen(argv[2], "r");
    if(file == NULL){
        printf("Error opening file %s\n", argv[2]);
        exit(1);
    }
	char line[MAXLINE];

    while (fgets(line, MAXLINE, file) != NULL){
		if (strstr(line, argv[1]) != NULL) {
			printf("%s", line);
		}
	}
    fclose(file);
    return 0;
}