#include <stdio.h>
int main(void){
    int a,b,c; if(scanf("%d %d %d",&a,&b,&c)!=3) return 0;
    int ab = (a+b+abs(a-b))/2;
    int m = (ab+c+abs(ab-c))/2;
    printf("%d eh o maior\n", m);
    return 0;
}
