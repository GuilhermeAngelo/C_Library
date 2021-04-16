struct emprestimo{ 
    
        char isbn[14];
        char dataEmp[11];
        char dataDevolve[11];
        char cpf[12];
        char status;
    };
    typedef struct emprestimo Emp;

//Cadastra um emprestimo
void cadastrarEmp(void);

//consulta um emprestimo
void consultarEmp(void);

//Atualiza um emprestimo já existente
char atualizarEmp(void);

//Devolve uma obra que foi emprestada
void devolverEmp(void);

void salvarEmp(Emp*);
Emp* buscaEmp(char*);
void exibirEmp(Emp*);