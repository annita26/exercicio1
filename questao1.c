#include <stdio.h>


int main(){

    int opcao;

    do{
        system("cls");

        printf("Cardapio Cafeteria\n");
        printf("1.Cafe expresso\n");
        printf("2.Capuccino\n");
        printf("3.Agua\n");
        printf("4.Suco de fruta\n");
        printf("5.Refrigerante\n");
        printf("6.Cha\n");
        printf("7.Leite\n");
        printf("8.Bolo\n");
        printf("9.Tapioca\n");

        scanf("%d", &opcao);


        switch(opcao){
            case 1:
                printf("Voce escolheu cafe expresso.\n");
                break;
            case 2:
                printf("Voce escolheu Capuccino");
                break;
            case 3:
                printf("Voce escolheu Agua");
                break;
            case 4:
                printf("Voce escolheu Suco de fruta");
                break;
            case 5:
                printf("Voce escolheu Refrigerante");
                break;
            case 6:
                printf("Voce escolheu Cha");
                break;
            case 7:
                printf("Voce escolheu Leite");
                break;
            case 8:
                printf("Voce escolheu Bolo");
                break;
            case 9:
                printf("Voce escolheu Tapioca");
                break;
            defautl:
                printf("Voce digitou uma opcao invalida");

        }//FIM DO SWITCH

        system("pause");

    } while(opcao!=0);

    return 0;
}
