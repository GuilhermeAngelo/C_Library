#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <locale.h>

//Assinaturas

//Menus

void menuSobre(void);
char menuPrincipal(void);
char menuUsuario(void);
char menuObras(void);
char menuEmprestimo(void);

//Usuario

void cadastrarUser(void);
void consultarUser(void);
char menuaAtuUser(void);
void atualizarNome(void);
void atualizarCpf(void);
void atualizarEmail(void);
void atualizarNomeU(void);
void atualizarSenha(void);
void excluirUser(void);

//Obra

void cadastrarObra(void);
void consultarObra(void);
char atualizarObra(void);
void atualizarTitulo(void);
void atualizarAutor(void);
void atualizardatap(void);
void atualizarEdicao(void);
void atualizarIsbn(void);
void excluirObra(void);

//Emprestimo

void cadastrarEmp(void);
void consultarEmp(void);
char atualizarEmp(void);
void devolverEmp(void);

//Modulos

void moduloUsuario(void);
void moduloAtualizarU(void);
void moduloObras(void);
void moduloAtualizarO(void);
void moduloEmprestimo(void);

//Programa Principal

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    menuSobre();
    char op;
    
    do {
        op = menuPrincipal();

        switch (op){
            case '1':   moduloUsuario();   
                        break;
            case '2':   moduloObras();
                        break;
            case '3':   moduloEmprestimo();
                        break;
        }
    } while (op != '0');
    return 0;
    
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
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ@0-9.]",&email);
    getchar();
    printf("//.   NOME DE USUARIO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ0-9]",&usuario);
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
    scanf("%[A-Za-zÁÉÍÓÚ0-9 ÂÊÎÔÃÕáéíóúãõâêîô]",&consulta);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

char menuAtuUser(void) {
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
    printf("//.   0 - SAIR                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\nSelecione: ");
    scanf("%c",&opcao);
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return opcao;
}

void atualizarNome(void){
    system("cls");
    char nomeA[61];
    char nomeN[61];
    char senha[16];
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      ATUALIZACAO DE NOME       |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O NOME ANTIGO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&nomeA);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",&senha);
    printf("//.   DIGITE O NOME NOVO: ");
    getchar();
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&nomeN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void atualizarCpf(void){
    system("cls");
    char cpfA[12];
    char cpfN[12];
    char senha[16];
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|       ATUALIZACAO DE CPF       |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O CPF RESGISTRADO: ");
    scanf("%[0-9]",cpfA);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",&senha);
    getchar();
    printf("//.   DIGITE O NOVO CPF: ");
    scanf("%[0-9]",&cpfN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void atualizarEmail(void){
    
    char emailA[61];
    char emailN[61];
    char senha[16];
    system("cls");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|       ATUALIZACAO DE EMAIL       |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O EMAIL RESGISTRADO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ@0-9.]",&emailA);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",&senha);
    getchar();
    printf("//.   DIGITE O NOVO EMAIL: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ@0-9.]",&emailN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    
}

void atualizarNomeU(void){
    system("cls");
    char nomeA[12];
    char nomeN[12];
    char senha[16];
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     ATUALIZACAO  NOME_USU      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O NOME DE USUARIO ANTIGO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ0-9]",&nomeA);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",&senha);
    getchar();
    printf("//.   DIGITE O NOVO NOME DE USUARIO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ0-9]",&nomeN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarSenha(void){
    
    system("cls");
    char senhaN[16];
    char cpf[16];
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      ATUALIZACAO DE SENHA      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O CPF: ");
    scanf("%[0-9]",&cpf);
    getchar();
    printf("//.   SENHA NOVA: ");
    scanf("%[A-Za-z0-9]",&senhaN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    
}

void excluirUser(void) {
    system("cls");
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
    char titulo[51];
    char autor[51];
    char datap[11];
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
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",&titulo);
    getchar();
    printf("//.   AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autor);
    getchar();
    printf("//.   DATA DE PUBLICACAO: ");
    scanf("%[0-9/]",&datap);
    getchar();
    printf("//.   EDICAO: ");
    scanf("%[0-9]",&edicao);
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
    printf("//.   0 - SAIR                                                                  .//\n");
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

void atualizarTitulo(void){
    char isbn[14];
    char obraA[51];
    char obraN[51];
    system("cls");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     ATUALIZACAO DE TITULO      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O ISBN DA OBRA: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIGITE O NOME ATUAL DA OBRA: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",&obraA);
    getchar();
    printf("//.   DIGITE O NOVO NOME DA OBRA: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",&obraN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarAutor(void){
    char isbn[14];
    char autorA[51];
    char autorN[51];
    system("cls");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     ATUALIZACAO DE AUTOR       |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O ISBN DA OBRA: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIGITE O NOME DO ANTIGO AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autorA);
    getchar();
    printf("//.   DIGITE O NOME DO NOVO AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autorN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizardatap(void){
    char isbn[14];
    char dataA[11];
    char dataN[11];
    system("cls");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&| ATUALIZACAO DATA DE PUBLICAÇÃO |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O ISBN DA OBRA: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIGITE A DATA ANTIGA: ");
    scanf("%[0-9/]",&dataA);
    getchar();
    printf("//.   DIGITE A DATA NOVA: ");
    scanf("%[0-9/]",&dataN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarEdicao(void){
    char isbn[14];
    char edicaoA[3];
    char edicaoN[3];
    system("cls");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     ATUALIZACAO DE EDICAO      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O ISBN DA OBRA: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIGITE O VAOR DA ANTIGA EDICAO: ");
    scanf("%[0-9]",&edicaoA);
    getchar();
    printf("//.   DIGITE O VALOR DA NOVA EDICAO: ");
    scanf("%[0-9]",&edicaoN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarIsbn(void){
    char isbnA[14];
    char autor[51];
    char isbnN[14];
    system("cls");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      ATUALIZACAO DE ISBN       |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O ISBN ATUAL DA OBRA: ");
    scanf("%[0-9]",&isbnA);
    getchar();
    printf("//.   DIGITE O NOME DO AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autor);
    getchar();
    printf("//.   DIGITE O ISBN DA OBRA: ");
    scanf("%[0-9]",&isbnN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
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
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",&titulo);
    getchar();
    printf("//.   AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autor);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIAS: ");
    scanf("%[0-9]",&dias);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.   CPF: ");
    scanf("%[0-9]",&cpf);
    getchar();
    printf("//.   NOME DE USUARIO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ0-9]",&titulo);
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
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",&titulo);
    getchar();
    printf("//.   AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",&autor);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIAS: ");
    scanf("%[0-9]",&dias);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//.   CPF: ");
    scanf("%[0-9]",&cpf);
    getchar();
    printf("//.   NOME DE USUARIO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",&titulo);
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
    scanf("%[0-9]",&cpf);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",&isbn);
    getchar();
    printf("//.   DIAS USANDO: ");// voce deve fornecer um numero, caso contrário o programa irá ficar solicitando ele
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

    void moduloUsuario(void) {
        char resposta;
        
        do {
            resposta = menuUsuario();
            
            switch(resposta){

            case '1':
            cadastrarUser();
            break;
            
            case '2':
            consultarUser();
            break;
                
            case '3':
            moduloAtualizarU();
            break;
                
            case '4':
            excluirUser();
            break;
                    
        }
    }while (resposta != '0');
}


    void moduloAtualizarU(void) {
        char resposta;

        do {
            resposta = menuAtuUser();
            switch (resposta){
                
            case 'N':    
            atualizarNome();
            break;
                
            case 'C':
            atualizarCpf();
            break;

            case 'E':
            atualizarEmail();
            break;

            case 'U':
            atualizarNomeU();
            break;

            case 'S':
            atualizarSenha();
            break;

        }    
    } while (resposta != '0');
}

void moduloObras(void){
    char resposta;
    do {
        resposta = menuObras();
        switch(resposta) {
            case '0':
            break;

            case '1':
            cadastrarObra();
            break;

            case '2':
            consultarObra();
            break;

            case '3':
            moduloAtualizarO();
            break;
            
            case '4':
            excluirObra();
            break;

        }
    }while (resposta != '0');
}

void moduloAtualizarO(void){
    char resposta;    
    
    do {
        resposta = atualizarObra();
        switch (resposta)
            {
            case 'T':    
                atualizarTitulo();
                break;
                
            case 'A':
                atualizarAutor();
                break;

            case 'D':
                atualizardatap();
                break;
            case 'E':
                atualizarEdicao();
                break;
            case 'I':
                atualizarIsbn();
                break;
        }
    } while (resposta != '0');
}
void moduloEmprestimo(void){
    
    char resposta;
    do{
        resposta = menuEmprestimo();
        switch(resposta) {

            case '1':
            cadastrarEmp();
            break;

            case '2':
            consultarEmp();
            break;

            case '3':
            atualizarEmp();
            break;
            
            case '4':
            devolverEmp();
            break;  

        }
    } while (resposta != '0');    
}