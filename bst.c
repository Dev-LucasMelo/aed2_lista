#include <stdio.h>
#include <stdlib.h>
#include "bst.h"



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

void preorder(arvore raiz){
    if(raiz != NULL){
        printf("[%d]",raiz->valor);
        preorder(raiz->esq);
        preorder(raiz->dir);
    }
};

void inorder(arvore raiz){
    if(raiz != NULL){
        inorder(raiz->esq);
        printf("[%d]",raiz->valor);
        inorder(raiz->dir);
    }
};

void posorder(arvore raiz) {
    if(raiz != NULL) {
        posorder(raiz->esq);
        posorder(raiz->dir);
        printf("[%d]", raiz->valor);
    }
}

void reverso(arvore raiz){
     if(raiz != NULL){
        reverso(raiz->dir);
        printf("[%d]",raiz->valor);
        reverso(raiz->esq);
    }

};


