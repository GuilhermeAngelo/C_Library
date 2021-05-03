#include "validacoes.h"
#include "usuario.h"
#include "obras.h"
#include <stdio.h>
#include <stdlib.h>
#include"emprestimo.h"
#include <string.h>

void cadastrarEmp(void) {
    int dia;
    int mes;
    int ano;
    int dataValida;
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
    while(validaIsbn(emp->isbn) == 0 || buscarObra(emp->isbn) == NULL){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",emp->isbn);
        getchar();
    }
    printf("//.   DATA DO EMPRESTIMO: ");
    scanf("%[^\n]", emp->dataEmp);
    getchar();
    dia = converteDia(emp->dataEmp);
    mes = converteMes(emp->dataEmp);
    ano = converteAno(emp->dataEmp);
    dataValida = testaData(dia,mes,ano);
    while(dataValida == 0){
        printf("//.   DATA INVALIDA, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   DATA DO EMPRESTIMO: ");
        scanf("%[^\n]", emp->dataEmp);
        getchar();
        dia = converteDia(emp->dataEmp);
        mes = converteMes(emp->dataEmp);
        ano = converteAno(emp->dataEmp);
        dataValida = testaData(dia,mes,ano);
    }
    printf("//.   DATA DE DEVOLUCAO: ");
    scanf("%[^\n]",emp->dataDevolve);
    getchar();
    dia = converteDia(emp->dataDevolve);
    mes = converteMes(emp->dataDevolve);
    ano = converteAno(emp->dataDevolve);
    dataValida = testaData(dia,mes,ano);
    while(dataValida == 0){
        printf("//.   DATA INVALIDA, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   DATA DO EMPRESTIMO: ");
        scanf("%[^\n]", emp->dataDevolve);
        getchar();
        dia = converteDia(emp->dataDevolve);
        mes = converteMes(emp->dataDevolve);
        ano = converteAno(emp->dataDevolve);
        dataValida = testaData(dia,mes,ano);
    }
    printf("//.                                                                             .//\n");
    printf("//.   CPF - apenas numeros - : ");
    scanf("%[^\n]",emp->cpf);
    getchar();
    while (validaCPF(emp->cpf) == 0 || buscarUser(emp->cpf) == NULL){
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
    Emp *busca;

    busca = (Emp*)malloc(sizeof(Emp));

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
    printf("//.   ISBN: ");
    scanf("%[0-9]",isbn);
    getchar();
    while(validaIsbn(isbn) == 0){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",isbn);
        getchar();
    }
    busca = buscaEmp(cpf);
    devEmp(busca,isbn);
    free(busca);
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
        if(strcmp(emprestimo->cpf,cpf) == 0 && (emprestimo->status != 'x')){
            fclose(fEmp);
            return emprestimo;   
        }
    } fclose(fEmp);
    return NULL;
}

void devEmp(Emp* empLido, char*isbn){
    FILE *fEmp;
    int achou = 0;

    if(empLido == NULL){
        printf("\n\nO EMPRESTIMO NAO EXISTE\n");
    } else {
        fEmp = fopen("Emprestimos.dat", "r+b");

        if(fEmp == NULL){
            printf("Nao foi possivel abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(!feof(fEmp)){
            if(strcmp(empLido->isbn,isbn) == 0 && (empLido->status != 'x') ){
                achou = 1;
                empLido->status = 'x';
                fseek(fEmp,-1*sizeof(Emp),SEEK_CUR);
                fwrite(empLido,sizeof(Emp),1,fEmp);
                break;
            } free(empLido);
        }
        fclose(fEmp); 
    }
}

Emp* buscaEmpDev(char *cpf, char *isbn){
    
    FILE *fEmp;
    Emp *emprestimo;

    emprestimo = (Emp*)malloc(sizeof(Emp));

    fEmp = fopen("Emprestimos.dat", "rb");

    if(fEmp == NULL){
        printf("Não foi possível ler o arquivo.\n\n");
        printf("Fechando o arquivo...");
        exit(1);
    }
    while(!feof(fEmp)){
        fread(emprestimo,sizeof(Emp),1,fEmp);
        if(strcmp(emprestimo->cpf,cpf) == 0 && (emprestimo->status != 'x')){
            if(strcmp(emprestimo->isbn,isbn) == 0){
                fclose(fEmp);
                return emprestimo;
            }
        }
    } fclose(fEmp);
    return NULL;
}
