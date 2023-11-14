#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

typedef struct no {
    int valor;
    struct no *esq;
    struct no *dir;
} no;

typedef no* arvore;

arvore inserir(arvore raiz, int valor);

void preorder(arvore raiz);

void inorder(arvore raiz);

void posorder(arvore raiz);

void reverso(arvore raiz);


#endif // BST_H_INCLUDED
