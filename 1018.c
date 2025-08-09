#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    printf("%d\n", n);
    int v[] = {100,50,20,10,5,2,1};
    for(int i=0;i<7;i++){
        int q = n / v[i]; n %= v[i];
        printf("%d nota(s) de R$ %d,00\n", q, v[i]);
    }
    return 0;
}
