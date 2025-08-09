#include <stdio.h>
int main(void){
    double x; if(scanf("%lf",&x)!=1) return 0;
    if(x<0 || x>100) puts("Fora de intervalo");
    else if(x<=25) puts("Intervalo [0,25]");
    else if(x<=50) puts("Intervalo (25,50]");
    else if(x<=75) puts("Intervalo (50,75]");
    else puts("Intervalo (75,100]");
    return 0;
}
