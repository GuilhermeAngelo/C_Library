struct usuario
{
    char nome[61];
    char cpf[12];
    char email[61];
    char usuario[16];
    char senha[16];
    char status;
    
};
typedef struct usuario Usuario;

//cadastra um usuário
void cadastrarUser(void);

//Consulta informações sobre o usuário
void consultarUser(void);

//Exibe um menu de informações sobre a atualização, onde solicita o que o usuário deseja atualizar
char menuaAtuUser(void);

//Atualiza o nome
void atualizarNome(void);

//Atualiza o Cpf
void atualizarCpf(void);

//Atualiza o email
void atualizarEmail(void);

//Atualiza o Nome de Usuário
void atualizarNomeU(void);

//Atualiza a senha
void atualizarSenha(void);

//Exclui um determinado usuário
void excluirUser(void);

void salvarUser(Usuario*);

Usuario* buscarUser(char*);

void exibirUser(Usuario*);