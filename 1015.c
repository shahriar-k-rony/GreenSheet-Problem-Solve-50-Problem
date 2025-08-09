#include <stdio.h>
#include <math.h>
int main(void){
    double x1,y1,x2,y2;
    if(scanf("%lf %lf",&x1,&y1)!=2) return 0;
    if(scanf("%lf %lf",&x2,&y2)!=2) return 0;
    double d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4f\n", d);
    return 0;
}
