#include <stdio.h>
int main(void){
    int time, speed; if(scanf("%d %d",&time,&speed)!=2) return 0;
    double liters = (time * speed) / 12.0;
    printf("%.3f\n", liters);
    return 0;
}
