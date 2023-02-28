#include <stdio.h>

int main() {
    //int
    int primeiro;
    int segundo;
    int terceiro;

    //resol
    printf("Introduza o primeiro digito : ");
    scanf("%d",&primeiro);
    printf("\n");

    printf("Introduza o segundo digito : ");
    scanf("%d",&segundo);
    printf("\n");

    printf("Introduza o terceiro digito : ");
    scanf("%d",&terceiro);
    printf("\n");

    int resultado = ((primeiro * 100 + segundo * 10 + terceiro) * 2);
    printf("O resultado e: %d ", resultado);


}
