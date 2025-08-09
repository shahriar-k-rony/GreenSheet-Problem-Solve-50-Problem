#include <stdio.h>
int main(void){
    const double PI = 3.14159;
    double R; if(scanf("%lf",&R)!=1) return 0;
    double V = (4.0/3.0)*PI*R*R*R;
    printf("VOLUME = %.3f\n", V);
    return 0;
}
