#include <stdio.h>

int main(){
    int quantidade;
    int razao;

    printf("Digite a quantidade de elementos da PG: ");
    scanf("%d",&quantidade);

    printf("Digite a razao da PG: ");
    scanf("%d", &razao);

    int resultado = 1;
    printf("%d", resultado);

    for(int i=1; i<quantidade; i++){

        resultado = resultado * razao;
        printf("%d", resultado);

    }







    return 0;
}
