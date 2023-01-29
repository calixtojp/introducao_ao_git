#include <stdio.h>
#include "matriz.h"

int main(){
    int qntd_alunos, qntd_notas;
    scanf("%d %d", &qntd_alunos, &qntd_notas);

    aluno_t *matriz_main = criar_matriz_alunos(qntd_alunos, qntd_notas);
    printf("matriz criada com sucesso\n");
    return 0;
}