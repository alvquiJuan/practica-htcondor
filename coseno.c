#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define  PI 3.141592

int main(void)

{ double X,Y;
  char buffer[100];
    FILE *f1;
    FILE *f2;
f1 = fopen("numero.txt","r");
fread (buffer, 1, 100, f1);
Y = atof(buffer);
fclose(f1);

X = cos (pow ((PI/('Y')),2));
f2 = fopen("coseno.txt","w");
fprintf(f2,"%lf",X);
fclose(f2);
}
