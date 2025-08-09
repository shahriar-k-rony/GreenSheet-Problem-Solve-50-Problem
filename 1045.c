#include <stdio.h>
int main(void){
    double a,b,c; if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
    // sort descending
    double A=a,B=b,C=c;
    if(A<B){double t=A;A=B;B=t;} if(B<C){double t=B;B=C;C=t;} if(A<B){double t=A;A=B;B=t;}
    if(A >= B + C){ puts("NAO FORMA TRIANGULO"); return 0; }
    double A2=A*A, BC2=B*B + C*C;
    if(A2 == BC2) puts("TRIANGULO RETANGULO");
    else if(A2 > BC2) puts("TRIANGULO OBTUSANGULO");
    else puts("TRIANGULO ACUTANGULO");
    if(A==B && B==C) puts("TRIANGULO EQUILATERO");
    else if(A==B || B==C) puts("TRIANGULO ISOSCELES");
    return 0;
}
