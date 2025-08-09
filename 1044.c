#include <stdio.h>
int main(void){
    int A,B; if(scanf("%d %d",&A,&B)!=2) return 0;
    if(A%B==0 || B%A==0) puts("Sao Multiplos");
    else puts("Nao sao Multiplos");
    return 0;
}
