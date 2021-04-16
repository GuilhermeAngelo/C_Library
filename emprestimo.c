#include "validacoes.h"
#include <stdio.h>
#include <stdlib.h>
#include"emprestimo.h"
#include <string.h>

void cadastrarEmp(void) {

    Emp *emp;
    emp = (Emp*)malloc(sizeof(Emp));

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
    scanf("%[^\n]",emp->cpf);
    getchar();
    while (validaCPF(emp->cpf) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[0-9]", emp -> cpf);
        getchar();
    }
    emp->status = '1';
    salvarEmp(emp);
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
    Emp *busca;

    busca = (Emp*)malloc(sizeof(Emp));

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//>>>>>>>>>>>>>>>>>>>>>|     CONSULTAR DE EMPRESTIMO     |<<<<<<<<<<<<<<<<<<<<<<<//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CPF - apenas numeros - : ");
    scanf("%[^\n]",cpf);
    getchar();
    while (validaCPF(cpf) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[^\n]", cpf);
        getchar();
    }
    busca = buscaEmp(cpf);
    exibirEmp(busca);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//...............................................................................//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

char atualizarEmp(void) {
    
    char isbn[14];
    char dataEmp[11];
    char dataDevolve[11];
    char cpf[12];
    //armazenar em uma estrutura

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//>>>>>>>>>>>>>>>>>>>>>|    ATUALIZACAO DE EMPRESTIMO    |<<<<<<<<<<<<<<<<<<<<<<<//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZAÇÃO DE EMPRESTIMO                                                 .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ISBN: ");
    scanf("%[0-9]",isbn);
    getchar();
    printf("//.   DATA DE EMPRESTIMO: ");
    scanf("%[0-9]",dataEmp);
    getchar();
    printf("//.   DATA DE DEVOLUCAO: ");
    scanf("%[0-9]",dataDevolve);
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
    printf("//.   DIAS USANDO: ");
    scanf("%d",dias);
    getchar();
    printf("//.   DIAS ALUGADOS: ");
    scanf("%d",diasAlugado);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//...............................................................................//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void salvarEmp(Emp* emp){
    FILE *fEmp;
    fEmp = fopen("Emprestimos.dat","ab");
    if(fEmp == NULL){
        printf("Ops ocorreu um erro na abertura do aquivo\n\n");
        printf("Fechando o programa...");
        exit(1);

    }
    fwrite(emp,sizeof(Emp),1,fEmp);
    fclose(fEmp);

}

void exibirEmp(Emp* emprestimo){
    if(emprestimo == NULL){
        printf("\n\nO EMPRESTIMO NAO EXISTE.\n");
    } else{
        printf("\n\n-------------------EMPRESTIMO CADASTRADO---------------------\n\n");
        printf("|  ISBN: %s                                                   \n", emprestimo->isbn);
        printf("|  CPF: %s                                                    \n", emprestimo->cpf);
        printf("|  DATA DE EMPRESTIMO: %s                                                  \n",emprestimo->dataEmp);
        printf("|  DATA DE DEVOLUCAO: %s                                                  \n", emprestimo->dataDevolve);
        printf("|  STATUS: %c                                                 \n", emprestimo->status);
        printf("\n----------------------------------------------------------\n\n");
        
        
    }
    free(emprestimo);
}

Emp* buscaEmp(char* cpf){
    
    FILE *fEmp;
    Emp *emprestimo;

    emprestimo = (Emp*)malloc(sizeof(Emp));

    fEmp = fopen("Emprestimos.dat", "rb");

    if(fEmp == NULL){
        printf("Não foi possível ler o arquivo.\n\n");
        printf("Fechando o arquivo...");
        exit(1);
    }
    while (!feof(fEmp)){
        fread(emprestimo,sizeof(Emp),1,fEmp);
        if(strcmp(emprestimo->cpf,cpf) == 0 && (emprestimo->status != '0')){
            fclose(fEmp);
            return emprestimo;
        }
    } fclose(fEmp);
    return NULL;
}
