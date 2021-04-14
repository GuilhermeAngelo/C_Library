struct obras
{
    char titulo[51];
    char autor[51];
    char datap[11];
    char edicao[4];
    char isbn[14];
    char status;
};

typedef struct obras Obras;

// Cadastra uma determinada obra
void cadastrarObra(void);

//Consulta informações sobre uma determinada obra
void consultarObra(void);

//Exibe um menu de informações sobre a atualização, onde solicita o que o usuário deseja atualizar
char atualizarObra(void);

//Atualiza o título da obra
void atualizarTitulo(void);

//Atualiza o nome do autor
void atualizarAutor(void);

//Atualiza a data de publicação da obra
void atualizardatap(void);

//Atualiza a edição da obra
void atualizarEdicao(void);

//Atualiza o isbn da obra
void atualizarIsbn(void);

//Exclui uma determinada obra
void excluirObra(void);

void salvarObra(Obras*);