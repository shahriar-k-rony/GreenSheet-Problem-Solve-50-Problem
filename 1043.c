#include <stdio.h>
int main(void){
    double A,B,C; if(scanf("%lf %lf %lf",&A,&B,&C)!=3) return 0;
    if(A+B>C && A+C>B && B+C>A){
        printf("Perimetro = %.1f\n", A+B+C);
    }else{
        printf("Area = %.1f\n", ((A+B)*C)/2.0);
    }
    return 0;
}
