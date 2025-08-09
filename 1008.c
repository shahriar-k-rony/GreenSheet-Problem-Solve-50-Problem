#include <stdio.h>
int main(void){
    int num, hrs; double rate;
    if(scanf("%d %d %lf",&num,&hrs,&rate)!=3) return 0;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, hrs*rate);
    return 0;
}
