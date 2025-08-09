#include <stdio.h>
int main(void){
    double val; if(scanf("%lf",&val)!=1) return 0;
    int n = (int)val;
    int cents = (int)((val - n + 1e-9)*100);
    int notes[] = {100,50,20,10,5,2};
    int coins[] = {100,50,25,10,5,1};
    printf("NOTAS:\n");
    for(int i=0;i<6;i++){
        int q = n/notes[i]; n%=notes[i];
        printf("%d nota(s) de R$ %d.00\n", q, notes[i]);
    }
    cents += n*100;
    printf("MOEDAS:\n");
    for(int i=0;i<6;i++){
        int q = cents/coins[i]; cents%=coins[i];
        printf("%d moeda(s) de R$ %.2f\n", q, coins[i]/100.0);
    }
    return 0;
}
