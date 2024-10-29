#ifndef ADOCAO.H
#define ADOCAO.H

#include <stdio.h>

typedef struct Doacao {
    int id_adotante;
    int id_animal;
    char* data; 
} Doacao; 

FILE* abrirArquivo(char* flags);
void  fecharArquivo(FILE * arq);
void cadastrarDoacao();
void listarDoacao();

#endif