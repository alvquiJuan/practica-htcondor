#include <math.h>
#include <stdio.h>
#define COSENO "coseno.txt"
#define SENO "seno.txt"

int main() {
        double x1, x2;
        FILE *f1 = fopen(COSENO, "r");
        FILE *f2 = fopen(SENO, "r");
        fscanf(f1,"%lf",&x1);
        fscanf(f2,"%lf",&x2);
        printf("%lf + %lf = %lf\n", x1, x2, x1 + x2);
        fclose(f1);
        fclose(f2);
}
