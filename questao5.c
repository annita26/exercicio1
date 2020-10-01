#include <stdio.h>

int main(){
    int quantidade;
    int razao;

    printf("Digite a quantidade de elementos da PA: ");
    scanf("%d",&quantidade);

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    int resultado = 0;
    printf("%d", resultado);

    for(int i=0; i<quantidade-1; i++){

        resultado = resultado + razao;
        printf("%d", resultado);

    }







    return 0;
}
