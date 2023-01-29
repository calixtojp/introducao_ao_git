#include "matriz.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct aluno{
    char *nome;
    float *notas; 
};

aluno_t *criar_matriz_alunos(int qntd_alunos, int qntd_notas){
    aluno_t *matriz_retorno = malloc(sizeof(aluno_t) * qntd_alunos);
    for(int contador = 0; contador <= qntd_alunos - 1; ++contador){
        matriz_retorno[contador].nome = malloc(sizeof(char) * MAX_SIZE_NAME);
        matriz_retorno[contador].notas = malloc(sizeof(float) * qntd_notas);
    }
    return matriz_retorno;
}

void ler_dados(aluno_t *matriz_main, int qntd_alunos, int qntd_notas){
    for(int contador_alunos = 0; contador_alunos <= qntd_alunos - 1; ++contador_alunos){
        scanf("%s", matriz_main[contador_alunos].nome);

        for(int contador_notas = 0; contador_notas <= qntd_notas - 1; ++contador_notas){
            scanf(" %f", &matriz_main[contador_alunos].notas[contador_notas]);
        }
    }
}

void printar_matriz(aluno_t *matriz_main, int qntd_alunos, int qntd_notas){
    for(int contador_alunos = 0; contador_alunos <= qntd_alunos - 1; ++contador_alunos){
        printf("aluno %d: Nome:%s Notas:", contador_alunos+1, matriz_main[contador_alunos].nome);
        for(int contador_notas = 0; contador_notas <= qntd_notas - 1; ++contador_notas){
            printf(" %.2f", matriz_main[contador_alunos].notas[contador_notas]);            
        }
        printf("\n");
    }
}