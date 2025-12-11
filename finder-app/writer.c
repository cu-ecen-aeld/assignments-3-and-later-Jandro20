
#include <stdio.h>
#include <stdarg.h>


int main(int argc, char *argv[]) {

    if(argc!= 3) {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "w");
    if(fp == NULL) {
        printf("Error opening file: %s\n", argv[1]);
        return 1;
    }

    fprintf(fp, "%s", argv[2]);

    fclose(fp);

    return 0;
}
