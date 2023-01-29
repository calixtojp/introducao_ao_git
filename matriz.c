#include "matriz.h"
#include "stdlib.h"

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