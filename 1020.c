#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    int y = n/365; n%=365;
    int m = n/30; n%=30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y,m,n);
    return 0;
}
