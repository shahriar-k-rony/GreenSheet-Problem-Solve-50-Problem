#include <stdio.h>
int main(void){
    int a,b,c; if(scanf("%d %d %d",&a,&b,&c)!=3) return 0;
    int x=a,y=b,z=c;
    if(x>y){int t=x;x=y;y=t;} if(y>z){int t=y;y=z;z=t;} if(x>y){int t=x;x=y;y=t;}
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", x,y,z, a,b,c);
    return 0;
}
