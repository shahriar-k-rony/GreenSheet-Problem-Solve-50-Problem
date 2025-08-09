#include <stdio.h>
int main(void){
    char name[100]; double fixed, sales;
    if(scanf("%s %lf %lf", name, &fixed, &sales)!=3) return 0;
    printf("TOTAL = R$ %.2f\n", fixed + sales*0.15);
    return 0;
}
