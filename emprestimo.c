#include "validacoes.h"
#include <stdio.h>
#include <stdlib.h>
struct emprestimo{ 
    
        char isbn[14];
        char dataEmp[11];
        char dataDevolve[11];
        char cpf[12];
        char status;
    };
    typedef struct emprestimo Emp;

void cadastrarEmp(void) {

    Emp *emp;
    emp = (Emp*)malloc(sizeof(Emp));
    char *cpf;

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//>>>>>>>>>>>>>>>>>>>>>|        CADASTRO EMPRESTIMO      |<<<<<<<<<<<<<<<<<<<<<<<//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CADASTRO DE EMPRESTIMO                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ISBN DA OBRA: ");
    scanf("%[^\n]",emp->isbn);
    getchar();
    printf("//.   DATA DO EMPRESTIMO: ");
    scanf("%[^\n]", emp->dataEmp);
    getchar();
    printf("//.   DATA DE DEVOLUCAO: ");
    scanf("%[^\n]",emp->dataDevolve);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.   CPF - apenas numeros - : ");
    scanf("%[0-9]",emp->cpf);
    getchar();
    while (validaCPF(emp->cpf) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[0-9]", emp -> cpf);
        getchar();
    }
    emp->status = '1';
    free(emp);
    printf("//.                                                                             .//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//...............................................................................//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void consultarEmp(void) {
    char cpf[12];
    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//>>>>>>>>>>>>>>>>>>>>>|     CONSULTAR DE EMPRESTIMO     |<<<<<<<<<<<<<<<<<<<<<<<//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CPF - apenas numeros - : ");
    scanf("%[0-9]",cpf);
    getchar();
    while (validaCPF(cpf) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[0-9]", cpf);
        getchar();
    }
    getchar();
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//...............................................................................//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

char atualizarEmp(void) {
    
    // Esse menu vai ser utilizado para quem já tem empréstimo e quer alugar novamente.
    //pois assim futuramente colocarei um contador para contabilizar a qndt de clientes e para evitar que o mesmo cliente seja contabilizado duas vezes.

    char titulo[31];
    char autor[51];
    char edicao[4];
    char isbn[14];
    char dias[3];
    char cpf[12];
    char nome[61];
    char usuario[16];
    char senha[16];

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//>>>>>>>>>>>>>>>>>>>>>|    ATUALIZACAO DE EMPRESTIMO    |<<<<<<<<<<<<<<<<<<<<<<<//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZAÇÃO DE EMPRESTIMO                                                 .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   TITULO DA OBRA: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",titulo);
    getchar();
    printf("//.   AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",autor);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",isbn);
    getchar();
    printf("//.   DIAS: ");
    scanf("%[0-9]",dias);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.   CPF - apenas numeros - : ");
    scanf("%[0-9]",cpf);
    getchar();
    while (validaCPF(cpf) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[0-9]", cpf);
        getchar();
    }
    getchar();
    printf("//.   NOME DE USUARIO: ");
    scanf("%[^\n]",usuario);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[^\n]",senha);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//...............................................................................//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void devolverEmp(void) {
    
    char cpf[12];
    char isbn[14];
    int dias;
    char multa;
    int diasAlugado;

    getchar();
    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//>>>>>>>>>>>>>>>>>>>>>>|            DEVOLUCAO           |<<<<<<<<<<<<<<<<<<<<<<<//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DEVOLUCAO                                                                 .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CPF - apenas numeros - : ");
    scanf("%[0-9]",cpf);
    getchar();
    while (validaCPF(cpf) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[0-9]", cpf);
        getchar();
    }
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",isbn);
    getchar();
    printf("//.   DIAS USANDO: ");// voce deve fornecer um numero, caso contrário o programa irá ficar solicitando ele
    scanf("%d",dias);
    getchar();
    printf("//.   DIAS ALUGADOS: ");
    scanf("%d",diasAlugado);
    getchar();
    multa = (dias - diasAlugado)*3;// vou fazer a função ainda(pois existiria uma multa negativa).Varei a validação quando chegar a semana.//
    printf("//.                                                                             .//\n");
    printf("//.   MULTA: %d                                                                 .//\n",&multa);
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//...............................................................................//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}