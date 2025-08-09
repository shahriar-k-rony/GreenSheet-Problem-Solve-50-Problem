#include <stdio.h>
int main(void){
    int c1, n1, c2, n2; double p1, p2;
    if(scanf("%d %d %lf", &c1, &n1, &p1)!=3) return 0;
    if(scanf("%d %d %lf", &c2, &n2, &p2)!=3) return 0;
    printf("VALOR A PAGAR: R$ %.2f\n", n1*p1 + n2*p2);
    return 0;
}
