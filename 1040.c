#include <stdio.h>
int main(void){
    double a,b,c,d; if(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=4) return 0;
    double media = (a*2+b*3+c*4+d*1)/10.0;
    printf("Media: %.1f\n", media);
    if(media>=7.0){ puts("Aluno aprovado."); }
    else if(media<5.0){ puts("Aluno reprovado."); }
    else{
        puts("Aluno em exame.");
        double e; if(scanf("%lf",&e)!=1) return 0;
        printf("Nota do exame: %.1f\n", e);
        double final = (media+e)/2.0;
        if(final>=5.0) puts("Aluno aprovado.");
        else puts("Aluno reprovado.");
        printf("Media final: %.1f\n", final);
    }
    return 0;
}
