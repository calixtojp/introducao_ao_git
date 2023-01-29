#define MAX_SIZE_NAME 30

typedef struct aluno aluno_t;

aluno_t *criar_matriz_alunos(int qntd_alunos, int qntd_notas);
void ler_dados(aluno_t *matriz_main, int qntd_alunos, int qntd_notas);
void printar_matriz(aluno_t *matriz_main, int qntd_alunos, int qntd_notas);