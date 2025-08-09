#include <stdio.h>
int main(void){
    int X; double Y; if(scanf("%d %lf",&X,&Y)!=2) return 0;
    printf("%.3f km/l\n", X/Y);
    return 0;
}
