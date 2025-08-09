#include <stdio.h>
int main(void){
    double A,B; if(scanf("%lf %lf",&A,&B)!=2) return 0;
    double MEDIA = (A*3.5 + B*7.5)/11.0;
    printf("MEDIA = %.5f\n", MEDIA);
    return 0;
}
