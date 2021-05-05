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
    Obras *busca;
    busca = (Obras*)malloc(sizeof(Obras)); 

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
    while(validaIsbn(emp->isbn) == 0 || buscarObraEmp(emp->isbn) == NULL){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",emp->isbn);
        getchar();
    }
    busca = buscarObra(emp->isbn);
    attStatus(busca,emp->isbn);
    free(busca);
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
    char isbn[14];
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
    printf("//.   ISBN - apenas numeros - : ");
    scanf("%[^\n]",isbn);
    getchar();
    while (validaIsbn(isbn) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[^\n]", isbn);
        getchar();
    }
    busca = buscaEmp(isbn);
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
    Obras*busca2;

    busca = (Emp*)malloc(sizeof(Emp));
    busca2 = (Obras*)malloc(sizeof(Obras));

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
    while(validaIsbn(isbn) == 0 || buscarObraD(isbn) == NULL){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",isbn);
        getchar();
    }
    busca = buscaEmp2(cpf);
    devEmp(busca,cpf);
    busca2 = buscarObraD(isbn);
    attStatusD(busca2,isbn);
    free(busca);
    free(busca2);
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

Emp* buscaEmp(char* isbn){
    
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
        if(strcmp(emprestimo->isbn,isbn) == 0 && (emprestimo->status != 'x')){
            fclose(fEmp);
            return emprestimo;
            break;   
        }
    } fclose(fEmp);
    return NULL;
}

void devEmp(Emp* empLido, char*cpf){
    FILE *fEmp;

    if(empLido == NULL){
        printf("\n\nO EMPRESTIMO NAO EXISTE\n");
    } else {
        fEmp = fopen("Emprestimos.dat", "r+b");

        if(fEmp == NULL){
            printf("Nao foi possivel abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(fread(empLido,sizeof(Emp), 1, fEmp)){
            if(strcmp(empLido->cpf,cpf) == 0 && empLido->status != 'x'){
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

Emp* buscaEmp2(char* cpf){
    
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

void relEmpE(void){
    FILE *fEmp;
    Emp *emp;
    int count = 0;


    emp = (Emp*)malloc(sizeof(Emp));
    fEmp = fopen("Emprestimos.dat", "rb");
    
    if(fEmp == NULL){
        printf("Não foi possivel Abrir o arquivo...\n\n Fechando...");
        exit(1);
    } while (fread(emp,sizeof(Emp), 1, fEmp)){
            if(emp->status != 'x'){
                count = count + 1;
                printf("-------------------------------------------------\n");
                printf("//.   %d - CPF: %s\n", count,emp->cpf);
                printf("//.        ISBN: %s\n", emp->isbn);
                printf("//.        EMAIL: %s\n", emp->dataEmp);
                printf("//.        USUARIO: %s\n", emp->dataDevolve);
                printf("------------------------------------------------\n");
            }
        }
        fclose(fEmp);
        free(emp);
}

void relEmpD(void){
    FILE *fEmp;
    Emp *emp;
    int count = 0;


    emp = (Emp*)malloc(sizeof(Emp));
    fEmp = fopen("Emprestimos.dat", "rb");
    
    if(fEmp == NULL){
        printf("Não foi possivel Abrir o arquivo...\n\n Fechando...");
        exit(1);
    } while (fread(emp,sizeof(Emp), 1, fEmp)){
            if(emp->status == 'x'){
                count = count + 1;
                printf("-------------------------------------------------\n");
                printf("//.   %d - CPF: %s\n", count,emp->cpf);
                printf("//.        ISBN: %s\n", emp->isbn);
                printf("//.        EMAIL: %s\n", emp->dataEmp);
                printf("//.        USUARIO: %s\n", emp->dataDevolve);
                printf("------------------------------------------------\n");
            }
        }
        fclose(fEmp);
        free(emp);
}