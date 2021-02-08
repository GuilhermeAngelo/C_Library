#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <locale.h>

//Assinaturas

void menuSobre(void);
char menuPrincipal(void);
char menuUsuario(void);
char menuObras(void);
char menuEmprestimo(void);

void cadastrarUser(void);
void consultarUser(void);
char atualizarUser(void);
void excluirUser(void);

void cadastrarObra(void);
void consultarObra(void);
char atualizarObra(void);
void excluirObra(void);

void cadastrarEmp(void);
void consultarEmp(void);
char atualizarEmp(void);
void devolverEmp(void);

//variáveis



//Programa Principal

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    menuSobre();
    menuPrincipal();
    menuUsuario();
    menuObras();
    menuEmprestimo();
    cadastrarUser();
    consultarUser();
    atualizarUser();
    excluirUser();
    cadastrarObra();
    consultarObra();
    atualizarObra();
    excluirObra();
    cadastrarEmp();
    consultarEmp();
    atualizarEmp();
    devolverEmp();
    
    return 0;
}

//Funções

void menuSobre(void) {

    printf("\n");
    printf("//------------------------------------------------------------------------------//\n");
    printf("//                                                                              //\n");
    printf("//                 Universidade Federal do Rio Grande do Norte                  //\n");
    printf("//                    Centro de Ensino Superior do Serido                       //\n");
    printf("//                  Departamento de Computacao e Tecnologia                     //\n");
    printf("//                     Disciplina DCT1106 -- Programacao                        //\n");
    printf("//          Projeto SIG_Library: Um sistema de Controle de Biblioteca.          //\n");
    printf("//                    Developed by  @GuilhermeAngelo - Jan, 2021                //\n");
    printf("//                                                                              //\n");
    printf("//------------------------------------------------------------------------------//\n");
    printf("//                                                                              //\n");
    printf("//                      /////////////////////////////////////                   //\n");
    printf("//*********************// C_Library: Gestão de Biblioteca //********************//\n");
    printf("//*                   /////////////////////////////////////                    *//\n");
    printf("//*                                                                            *//\n");
    printf("//*    O projeto tem como objetivo criar um sistema que consiga Possibilitar o *//\n");
    printf("//* cadastro de livros e clientes,controlar a entrada e saida de livros,Empres-*//\n");
    printf("//* timos, Gerar Historicos de emprestimos, Sistema de busca de obras, Sistema *//\n");
    printf("//* de Disponibilidade de obras, Sistema de Controle de Prazos de Emprestimos, *//\n");
    printf("//* entre outras funcionalidades.                                              *//\n");
    printf("//*                                                                            *//\n");
    printf("//******************************************************************************//\n");
    printf("//                                                                              //\n");
    printf("//------------------------------------------------------------------------------//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...");
	getchar();

}

char menuPrincipal(void) {
    char escolha;

    system("cls");
    printf("\n");
    printf("                        /////////////////////////////////////                     \n");
    printf("//*********************//          MENU PRINCIPAL         //********************//\n");
    printf("//*                   /////////////////////////////////////                    *//\n");
    printf("//*                                                                            *//\n");
    printf("//**************************SELECIONE A OPCAO DESEJADA**************************//\n");
    printf("//*                                                                            *//\n");
    printf("//*   0 - FINALIZAR                                                            *//\n");
    printf("//*   1 - USUARIOS                                                             *//\n");
    printf("//*   2 - OBRAS/LIVROS                                                         *//\n");
    printf("//*   3 - EMPRESTIMOS                                                          *//\n");
    printf("//*                                                                            *//\n");
    printf("//******************************************************************************//\n");
    printf("Selecione: ");
    scanf("%c",&escolha);
    getchar();
    printf("\t\t\t>>> Tecle <ENTER> para continuar...");
    getchar();    
    return escolha;

}

char menuUsuario(void) {
    
    char escolha;

    system("cls");
    printf("\n");
    printf("//.....................????????????????????????????????????.....................//\n");
    printf("//.....................?         MODULO DE USUARIO        ?.....................//\n");
    printf("//.....................????????????????????????????????????.....................//\n");
    printf("//.                                                                            .//\n");
    printf("//.   SELECIONE A OPCAO DESEJADA:                                              .//\n");
    printf("//.                                                                            .//\n");
    printf("//.   0 - RETORNAR AO MENU PRINCIPAL                                           .//\n");
    printf("//.   1 - CADASTRAR NOVO USUARIO                                               .//\n");
    printf("//.   2 - PESQUISAR DADOS/CONSULTAR USUARIOS                                   .//\n");
    printf("//.   3 - ATUALIZAR O DADOS DE CADASTRO                                        .//\n");
    printf("//.   4 - EXCLUIR USUARIO                                                      .//\n");
    printf("//.                                                                            .//\n");
    printf("//..............................................................................//\n");
    printf("Selecione: ");
    scanf("%c",&escolha);
    getchar();
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return escolha;

}

char menuObras(void) {
    char escolha;

    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//=====================|          MODULO DE OBRAS         |======================//\n");
    printf("//==============================================================================.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   SELECIONE A OPCAO DESEJADA:                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   0 - RETORNAR AO MENU PRINCIPAL                                            .//\n");
    printf("//.   1 - CADASTRAR NOVA OBRA                                                   .//\n");
    printf("//.   2 - PESQUISAR DADOS/CONSULTAR OBRA                                        .//\n");
    printf("//.   3 - ATUALIZAR O DADOS DE OBRA                                             .//\n");
    printf("//.   4 - EXCLUIR OBRA                                                          .//\n");
    printf("//.                                                                             .//\n");
    printf("//===============================================================================//\n");
    printf("Selecione: ");
    scanf("%c",&escolha);
    getchar();
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return escolha;
}

char menuEmprestimo(void) {    
    char escolha;

    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//---------------------|       MODULO DE EMPRESTIMOS      |----------------------//\n");
    printf("//==============================================================================.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   SELECIONE A OPCAO DESEJADA:                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   0 - RETORNAR AO MENU PRINCIPAL                                            .//\n");
    printf("//.   1 - CADASTRAR UM NOVO EMPRESTIMO                                          .//\n");
    printf("//.   2 - PESQUISAR DADOS/CONSULTAR EMPRESTIMO                                  .//\n");
    printf("//.   3 - ATUALIZAR EMPRESTIMO                                                  .//\n");
    printf("//.   4 - DEVOLVER ITEM EMPRESTADO                                              .//\n");
    printf("//.                                                                             .//\n");
    printf("//===============================================================================//\n");
    printf("Selecione: ");
    scanf("%c",&escolha);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return escolha;
}

void cadastrarUser(void) {
    
    char nome[61];
    char cpf[12];
    char email[61];
    char usuario[12];
    char senha[16];

    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|       MODULO DE CADASTRO      |&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CADASTRO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   NOME COMPLETO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&nome);
    getchar();
    printf("//.   CPF: ");
    scanf("%[0-9]",&cpf);
    getchar();
    printf("//.   EMAIL: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&email);
    getchar();
    printf("//.   NOME DE USUARIO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&usuario);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",&senha);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void consultarUser(void) {
    char consulta[12];

    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      MODULO DE CONSULTA      |&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O NOME OU CPF DO USUARIO: ");
    scanf("%[0-9]",&consulta);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

char atualizarUser(void) {
    char opcao;
    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     MODULO DE ATUALIZACAO      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   O QUE DESEJA ATUALIZAR?                                                   .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   N - NOME                                                                  .//\n");
    printf("//.   C - CPF                                                                   .//\n");
    printf("//.   E - EMAIL                                                                 .//\n");
    printf("//.   U - NOME DE USUARIO                                                       .//\n");
    printf("//.   S - SENHA                                                                 .//\n");
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\nSelecione: ");
    scanf("%c",&opcao);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return opcao;
}

void excluirUser(void) {
    char cpf[12];
    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&       MODULO DE EXCLUSAO      &&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   EXCLUSAO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O CPF DO USUARIO QUE DESEJA EXCLUIR                                .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CPF: ");
    scanf("%[0-9]",&cpf);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void cadastrarObra(void) {
    
    char titulo[31];
    char autor[51];
    char datap[9];
    char edicao[3];
    char isbn[14];

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!        CADASTRO DE OBRA         !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CADASTRO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   TITULO DA OBRA: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&titulo);
    getchar();
    printf("//.   AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autor);
    getchar();
    printf("//.   DATA DE PUBLICACAO: ");
    scanf("%[1-31/]",&datap);
    getchar();
    printf("//.   EDICAO: ");
    scanf("%[1-1000]",&edicao);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",&titulo);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void consultarObra(void) {
    char pesquisa[50];

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!        CONSULTA DE OBRA        !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   NOME OU ISBN DA OBRA : ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",&pesquisa);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

char atualizarObra(void) {
    char opcao;

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("/!!!!!!!!!!!!!!!!!!!!!!!       ATUALIZACAO DE OBRA       !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   O QUE DESEJA ATUALIZAR                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   T - TITULO DA OBRA                                                        .//\n");
    printf("//.   A - AUTOR                                                                 .//\n");
    printf("//.   D - DATA DE PUBLICACAO                                                    .//\n");
    printf("//.   E - EDICAO                                                                .//\n");
    printf("//.   I - ISBN                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\nSelecione: ");
    scanf("%c",&opcao);
    getchar();
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return opcao;
}

void excluirObra(void) {
    char isbn[14];

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!        EXCLUSAO DE OBRA        !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   EXCLUSAO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ISBN DA OBRA : ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void cadastrarEmp(void) {
    
    char titulo[31];
    char autor[51];
    char edicao[3];
    char isbn[14];
    char dias[3];
    char cpf[12];
    char nome[51];
    char senha[16];

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//>>>>>>>>>>>>>>>>>>>>>|        CADASTRO EMPRESTIMO      |<<<<<<<<<<<<<<<<<<<<<<<//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CADASTRO DE EMPRESTIMO                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   TITULO DA OBRA: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&titulo);
    getchar();
    printf("//.   AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autor);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIAS: ");
    scanf("%[1-7]",&dias);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.   CPF: ");
    scanf("%[0-9]",&cpf);
    getchar();
    printf("//.   NOME DE USUARIO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0]",&titulo);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",&senha);
    getchar();
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
    printf("//.   CPF DO USUARIO: ");
    scanf("%[0-9]",&cpf);
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
    char edicao[3];
    char isbn[14];
    char dias[3];
    char cpf[12];
    char nome[51];
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
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&titulo);
    getchar();
    printf("//.   AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autor);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIAS: ");
    scanf("%[1-7]",&dias);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.   CPF: ");
    scanf("%[0-9]",&cpf);
    getchar();
    printf("//.   NOME DE USUARIO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0]",&titulo);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",&senha);
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
    printf("//.   CPF: ");
    scanf("%[0-0]",&cpf);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIAS USANDO: ");
    scanf("%d",&dias);
    getchar();
    printf("//.   DIAS ALUGADOS: ");
    scanf("%d",&diasAlugado);
    getchar();
    multa = (dias - diasAlugado)*3;// vou fazer a função ainda(pois existiria uma multa negativa).Varei a validação quando chegar a semana.//
    printf("//.                                                                             .//\n");
    printf("//.   MULTA: %d                                                                 .//\n",multa);
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//...............................................................................//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}