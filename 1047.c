#include <stdio.h>
int main(void){
    int a,b,c,d; if(scanf("%d %d %d %d",&a,&b,&c,&d)!=4) return 0;
    int start = a*60 + b, end = c*60 + d;
    int dur = end - start; if(dur<=0) dur += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur/60, dur%60);
    return 0;
}
