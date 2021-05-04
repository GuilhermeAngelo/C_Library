typedef struct obras Obras;

struct obras
{
    char titulo[51];
    char autor[61];
    char datap[11];
    char edicao[4];
    char isbn[14];
    char status;
    Obras* prox;
};

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

void exibirObra(Obras*);

void delObra(Obras*,char*);

void atualizaAutor(Obras*, char*);

void atualizaDatap(Obras*, char*);

void atualizaEdicao(Obras*, char*);

Obras* buscarObra(char*);

void atualizaTitulo(Obras*, char*);

void relObras(void);

void attStatus(Obras*obraLida, char*isbn);

void attStatusD(Obras*obraLida, char*isbn);

Obras* buscarObraEmp(char*isbn);

Obras* buscarObraD(char*isbn);
void relObrasD(void);
void relObrasI(void);