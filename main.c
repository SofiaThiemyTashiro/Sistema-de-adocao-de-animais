#include <stdio.h>
#include <stdlib.h>
#include "libs/adocao.h"
#include "libs/adotante.h"
#include "libs/animal.h"

void subMenuAdotantes(){
     int op = 0;

    do{

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\
***** GERENCIAR ADOTANTES *****\n\
1.Adicionar Adotante\n\
2.Consultar Adotantes\n\
3.Alterar Adotante\n\
4.Excluir Adotante\n\
5.Voltar\n\
\n\
Digite a opção desejada: ");
        scanf("%d", &op);

        switch (op){
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("2\n");
                break;
            case 3:
                printf("3\n");
                break;
            case 4:
                printf("4\n");
                break;

            case 5:
                break;

            default:
                printf("Ops, opção errada.\n");
                printf("Pressione qualquer tecla para continuar\n");
                getchar();
                break;
        }

    } while(op !=5 );
    
}

void subMenuAnimais(){
     int op = 0;

    do{

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\
***** GERENCIAR ANIMAIS *****\n\
1.Adicionar Animal\n\
2.Consultar Animal\n\
3.Alterar Animal\n\
4.Excluir Animal\n\
5.Voltar\n\
\n\
Digite a opção desejada: ");
        scanf("%d", &op);

        switch (op){
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("2\n");
                break;
            case 3:
                printf("3\n");
                break;
            case 4:
                printf("4\n");
                break;

            case 5:
                break;

            default:
                printf("Ops, opção errada.\n");
                printf("Pressione qualquer tecla para continuar\n");
                getchar();
                break;
        }

    } while(op !=5 );
    
}

int main(){
    int op = 0;

    do{

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\
***** MENU *****\n\
1.Gereciamento Adotante\n\
2.Gerenciamento Animal\n\
3.Cadastrar Adoção\n\
4.Listar Adoções\n\
5.Sair\n\
\n\
Digite a opção desejada: ");
        scanf("%d", &op);

        switch (op){
            case 1:
                subMenuAdotantes();
                break;
            case 2:
                subMenuAnimais();
                break;
            case 3:
                printf("3\n");
                break;
            case 4:
                printf("4\n");
                break;

            case 5:
                break;

            default:
                printf("Ops, opção errada.\n");
                printf("Pressione qualquer tecla para continuar\n");
                getchar();
                break;
        }

    } while(op !=5 );

    printf("bye bye.\n");
    exit(0);

}