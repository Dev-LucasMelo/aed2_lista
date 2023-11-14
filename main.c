#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main()
{
    arvore a = NULL;

    a = inserir(a,3);
    a = inserir(a,7);
    a = inserir(a,10);
    a = inserir(a,2);
    a = inserir(a,1);

    posorder(a);
    printf("\n\n");


    return 0;
}
