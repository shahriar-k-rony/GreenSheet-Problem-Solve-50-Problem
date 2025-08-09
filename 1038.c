#include <stdio.h>
int main(void){
    int code, qty; if(scanf("%d %d",&code,&qty)!=2) return 0;
    double price[] = {0,4.00,4.50,5.00,2.00,1.50};
    printf("Total: R$ %.2f\n", price[code]*qty);
    return 0;
}
