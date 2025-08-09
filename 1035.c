#include <stdio.h>
int main(void){
    int A,B,C,D; if(scanf("%d %d %d %d",&A,&B,&C,&D)!=4) return 0;
    if(B>C && D>A && (C+D)>(A+B) && C>0 && D>0 && A%2==0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
    return 0;
}
