#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

//1
arvore inserir(arvore raiz, int valor){
    if(raiz == NULL){
        arvore novo = (arvore) malloc(sizeof(no));

        novo->valor = valor;
        novo->esq = NULL;
        novo->dir = NULL;

        return novo;
    }else{
        if(valor > raiz->valor){
            raiz->dir = inserir(raiz->dir,valor);
        }else{
            raiz->esq = inserir(raiz->esq,valor);
        }
        return raiz;
    }
};

//2
void preorder(arvore raiz){
    if(raiz != NULL){
        printf("[%d]",raiz->valor);
        preorder(raiz->esq);
        preorder(raiz->dir);
    }
};

//3
void inorder(arvore raiz){
    if(raiz != NULL){
        inorder(raiz->esq);
        printf("[%d]",raiz->valor);
        inorder(raiz->dir);
    }
};

//4
void posorder(arvore raiz) {
    if(raiz != NULL) {
        posorder(raiz->esq);
        posorder(raiz->dir);
        printf("[%d]", raiz->valor);
    }
}

//5
void reverso(arvore raiz){
     if(raiz != NULL){
        reverso(raiz->dir);
        printf("[%d]",raiz->valor);
        reverso(raiz->esq);
    }

};

//6
int qtdPar(arvore raiz){
    int contador;

    if(raiz == NULL){
        return 0;
    }

    if(raiz != NULL){
        contador = qtdPar(raiz->esq);
        contador = contador + qtdPar(raiz->dir);
    };

    if(raiz->valor % 2 == 0){
        contador++;
    };

    return contador;
}

//9
arvore remover(arvore raiz,int valor){

    //se raiz for nula, retorna raiz
    if(raiz == NULL){
        return raiz;
    }

    //se o valor existir temos que remover
    if(valor == raiz->valor){
        //casos de remover

        //caso 1 sem filhos
        if(raiz->esq == NULL && raiz->dir == NULL){
            free(raiz);
            return NULL;
        }
        //caso 2 com exatamente um filho direito ou esquerdo
        //2.1 esquerdo
        if(raiz->esq != NULL && raiz->dir == NULL){
            arvore aux;
            aux = raiz->esq;
            free(raiz);

            return aux;
        }
        //2.2 direito
        if(raiz->esq == NULL && raiz->dir != NULL){
            arvore aux;
            aux = raiz->dir;
            free(raiz);

            return aux;
        }

        //caso 3 com dois filhos

        if(raiz->esq != NULL && raiz->dir != NULL){
            //caminho : trocar maior valor da esquerda
            //com valor da raiz e chamar recursivamente para bater no caso 1 ou 2
            arvore aux = raiz->esq;
            while(aux->dir != NULL){
                aux = aux->dir;
            };
            raiz->valor = aux->valor;
            aux->valor = valor;

            raiz->esq = remover(raiz->esq,valor);
            return raiz;
        }
    }else{
        //continua procurando
        if(valor < raiz->valor){
            raiz->esq = remover(raiz->esq,valor);
        }

        if(valor > raiz->valor){
            raiz->dir = remover(raiz->dir,valor);
        }
    }

    return raiz;
};


//10
int somaPar(arvore raiz){

    int somador;

    if(raiz == NULL){
        return 0;
    }

    if(raiz != NULL){
        somador = somaPar(raiz->esq);
        somador = somador + somaPar(raiz->dir);
    };

    if(raiz->valor % 2 == 0){
        somador = somador + raiz->valor;
    };

    return somador;
};

//12
void dobro(arvore raiz){

    if(raiz == NULL){
        raiz = NULL;
    }

    if(raiz != NULL){
        raiz->valor = raiz->valor * 2;
        dobro(raiz->esq);
        dobro(raiz->dir);
    }

};

//13
int busca(arvore raiz, int valor){
    //0 para nao encontrado
    //1 para encontrado

    if(raiz != NULL){
        if(valor == raiz->valor){
            return 1;
        }

        if(valor > raiz->valor){
            return busca(raiz->dir,valor);
        }

        if(valor < raiz->valor){
            return busca(raiz->esq,valor);
        }
    }
    return 0;
};