#include <stdio.h>
int main(void){
    int a,b; if(scanf("%d %d",&a,&b)!=2) return 0;
    int d = b - a; if(d<=0) d += 24;
    printf("O JOGO DUROU %d HORA(S)\n", d);
    return 0;
}
