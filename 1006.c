#include <stdio.h>
int main(void){
    double A,B,C; if(scanf("%lf %lf %lf",&A,&B,&C)!=3) return 0;
    double MEDIA = (A*2 + B*3 + C*5)/10.0;
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}
