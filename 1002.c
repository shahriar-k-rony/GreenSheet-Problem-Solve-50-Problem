#include <stdio.h>
int main(void){
    const double PI = 3.14159;
    double R; if(scanf("%lf",&R)!=1) return 0;
    printf("A=%.4f\n", PI*R*R);
    return 0;
}
