#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    //declarar e inicializar como árvore vazia
    arvore a = NULL;
    int opcao;
    int temp;

    while(1) {
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                scanf("%d", &temp);
                a = inserir(a, temp);
                break;
            case 2:
                preorder(a);
                printf("\n");
                break;


            case 99:
                exit(0);
        }

    }

}
