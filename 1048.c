#include <stdio.h>
int main(void){
    double s; if(scanf("%lf",&s)!=1) return 0;
    double p;
    if(s<=400.00) p=15;
    else if(s<=800.00) p=12;
    else if(s<=1200.00) p=10;
    else if(s<=2000.00) p=7;
    else p=4;
    double inc = s*p/100.0;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", s+inc, inc, p);
    return 0;
}
