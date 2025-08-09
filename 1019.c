#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    int h = n/3600; n%=3600;
    int m = n/60; n%=60;
    printf("%d:%d:%d\n", h,m,n);
    return 0;
}
