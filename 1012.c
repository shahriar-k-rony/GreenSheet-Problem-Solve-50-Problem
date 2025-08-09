#include <stdio.h>
int main(void){
    const double PI = 3.14159;
    double A,B,C; if(scanf("%lf %lf %lf",&A,&B,&C)!=3) return 0;
    printf("TRIANGULO: %.3f\n", (A*C)/2.0);
    printf("CIRCULO: %.3f\n", PI*C*C);
    printf("TRAPEZIO: %.3f\n", ((A+B)*C)/2.0);
    printf("QUADRADO: %.4f\n", B*B);
    printf("RETANGULO: %.3f\n", A*B);
    return 0;
}
