#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main()
{
    arvore a = NULL;

    int option,valor;
    printf("___________________________________________________________________________\n");
    printf("ATIVIDADE AED2\n\n");
    printf("DISCENTE: LUCAS MESSIAS M. DE MELO\n");
    printf("ARVORE BST\n");
    printf("___________________________________________________________________________\n\n\n\n");

    printf("_________________________ESCOLHA UMA OPCAO__________________________________\n\n\n");


    printf("[1]INSERIR [2]PREORDER   [3]INORDER [4]POSORDER      [5]REVERSO\n");
    printf("[6]QTDPAR  [7]ANTECESSOR [8]PAI     [9]REMOVER       [10]SOMAPAR\n");
    printf("[11]PODAR  [12]DOBRO     [13]BUSCA  [14]DESCENDENTES [15]ALTURA    [99]SAIR\n\n");

    printf("Escolha uma opcao:");
    scanf("%d",&option);
    while(option != 99){

        switch(option){
            case 1:
                printf("Informe o valor :");
                scanf("%d",&valor);
                a = inserir(a,valor);

                printf("\nValor inserido !");
            break;
            case 2:
                printf("\n");
                preorder(a);
                printf("\n:");
            break;
            case 3:
                printf("\n");
                inorder(a);
                printf("\n");
            break;
             case 4:
                printf("\n");
                posorder(a);
                printf("\n");
            break;
            case 5:
                printf("\n");
                reverso(a);
                printf("\n");
            break;
            case 6:
                printf("\n%d\n",qtdPar(a));
            break;
            case 7:
                printf("\ncaso 7 n implementado :/ \n");
            break;
            case 8:
                printf("Informe o valor :");
                scanf("%d",&valor);
                printf("%d\n",pai(a,valor));
            break;
            case 9:
                printf("Informe o valor :");
                scanf("%d",&valor);
                a = remover(a,valor);
                printf("valor removido com sucesso !");
            break;
            case 10:
                printf("%d\n",somaPar(a));
            break;
            case 11:
                printf("Informe o valor :");
                scanf("%d",&valor);
                podar(a,valor);
                printf("valores removidos com sucesso !");
            break;
            case 12:
                dobro(a);
                printf("os valores da arvore foram dobrados com sucesso !");
            break;
            case 13:
                printf("Informe o valor :");
                scanf("%d",&valor);
                printf("%d\n",busca(a,valor));
            break;
            case 14:
                printf("Informe o valor :");
                scanf("%d",&valor);
                descendentes(a,valor);
                printf("\n");
            break;
            case 15:
                printf("\ncaso 15 nao implementado :/ \n");
            break;
        }

        printf("\n______________________");
        printf("\nEscolha uma opcao:");
        scanf("%d",&option);

    };

    printf("\nsaindo...\n");
    return 0;
}
