#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
        double x;
        char *filename;
        FILE *fd;
        if (argc != 3) {
                printf("This program requires two arguments <float> <filename>\n");
                exit(-1);
        }
        x = atof(argv[1]);
        filename = (char*)malloc(sizeof(char)*strlen(argv[2]));
        strcpy(filename,argv[2]);
        fd = fopen(filename,"w");
        if (fd == NULL) {
                printf("File can not be created\n");
                exit(-1);
        }
        fprintf(fd,"%lf",x);
        fclose(fd);
}
