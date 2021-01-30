#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

//Assinaturas

void menuSobre(void);
void menuPrincipal(void);
void menuUsuario(void);
void menuObras(void);
void menuEmprestimo(void);
void menuCadastro(void);
void menuConsulta(void);
void menuAtualizar(void);
void menuExcluirUser(void);
void menuCadastrarObra(void);
void menuConsultarObra(void);
void menuAtualizarObra(void);
void menuExcluirObra(void);

//Programa Principal

int main(void) {
    
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    
    SetConsoleOutputCP(CPAGE_UTF8);

    menuSobre();
    menuPrincipal();
    menuUsuario();
    menuObras();
    menuEmprestimo();
    menuCadastro();
    menuConsulta();
    menuAtualizar();
    menuExcluirUser();
    menuCadastrarObra();
    menuConsultarObra();
    menuAtualizarObra();
    menuExcluirObra();
    

    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}

//Funções

void menuSobre(void) {

    printf("\n");
    printf("//------------------------------------------------------------------------------//\n");
    printf("//                                                                              //\n");
    printf("//                 Universidade Federal do Rio Grande do Norte                  //\n");
    printf("//                    Centro de Ensino Superior do Seridó                       //\n");
    printf("//                  Departamento de Computação e Tecnologia                     //\n");
    printf("//                     Disciplina DCT1106 -- Programação                        //\n");
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
    printf("//* cadastro de livros e clientes,controlar a entrada e saída de livros,Emprés-*//\n");
    printf("//* timos, Gerar Históricos de empréstimos, Sistema de busca de obras, Sistema *//\n");
    printf("//* de Disponibilidade de obras, Sistema de Controle de Prazos de Empréstimos, *//\n");
    printf("//* entre outras funcionalidades.                                              *//\n");
    printf("//*                                                                            *//\n");
    printf("//******************************************************************************//\n");
    printf("//                                                                              //\n");
    printf("//------------------------------------------------------------------------------//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...");
	getchar();

}

void menuPrincipal(void) {

    system("cls");
    printf("\n");
    printf("                        /////////////////////////////////////                     \n");
    printf("//*********************//          MENU PRINCIPAL         //********************//\n");
    printf("//*                   /////////////////////////////////////                    *//\n");
    printf("//*                                                                            *//\n");
    printf("//**************************SELECIONE A OPÇÃO DESEJADA**************************//\n");
    printf("//*                                                                            *//\n");
    printf("//*   0 - FINALIZAR                                                            *//\n");
    printf("//*   1 - USUÁRIOS                                                             *//\n");
    printf("//*   2 - OBRAS/LIVROS                                                         *//\n");
    printf("//*   3 - EMPRÉSTIMOS                                                          *//\n");
    printf("//*                                                                            *//\n");
    printf("//******************************************************************************//\n");
    printf("//******************************************************************************//\n"); 
    printf("//******************************************************************************//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");   
    getchar();    
}
void menuUsuario(void) {
    system("cls");
    printf("\n");
    printf("//.....................????????????????????????????????????.....................//\n");
    printf("//.....................?         MÓDULO DE USUÁRIO        ?.....................//\n");
    printf("//.....................????????????????????????????????????.....................//\n");
    printf("//.                                                                            .//\n");
    printf("//.   SELECIONE A OPÇÃO DESEJADA:                                              .//\n");
    printf("//.                                                                            .//\n");
    printf("//.   0 - RETORNAR AO MENU PRINCIPAL                                           .//\n");
    printf("//.   1 - CADASTRAR NOVO USUÁRIO                                               .//\n");
    printf("//.   2 - PESQUISAR DADOS/CONSULTAR USUÁRIOS                                   .//\n");
    printf("//.   3 - ATUALIZAR O DADOS DE CADASTRO                                        .//\n");
    printf("//.   4 - EXCLUIR USUÁRIO                                                      .//\n");
    printf("//.                                                                            .//\n");
    printf("//..............................................................................//\n");
    printf("//..............................................................................//\n");
    printf("//..............................................................................//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void menuObras(void) {

    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//=====================|          MÓDULO DE OBRAS         |======================//\n");
    printf("//==============================================================================.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   SELECIONE A OPÇÃO DESEJADA:                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   0 - RETORNAR AO MENU PRINCIPAL                                            .//\n");
    printf("//.   1 - CADASTRAR NOVA OBRA                                                   .//\n");
    printf("//.   2 - PESQUISAR DADOS/CONSULTAR OBRA                                        .//\n");
    printf("//.   3 - ATUALIZAR O DADOS DE OBRA                                             .//\n");
    printf("//.   4 - EXCLUIR OBRA                                                          .//\n");
    printf("//.                                                                             .//\n");
    printf("//===============================================================================//\n");
    printf("//===============================================================================//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void menuEmprestimo(void) {    
    
    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//---------------------|       MÓDULO DE EMPRÉSTIMOS      |----------------------//\n");
    printf("//==============================================================================.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   SELECIONE A OPÇÃO DESEJADA:                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   0 - RETORNAR AO MENU PRINCIPAL                                            .//\n");
    printf("//.   1 - CADASTRAR UM NOVO EMPRESTIMO                                          .//\n");
    printf("//.   2 - PESQUISAR DADOS/CONSULTAR EMPRÉSTIMO                                  .//\n");
    printf("//.   3 - DEVOLVER ITEM EMPRESTADO                                              .//\n");
    printf("//.   4 - ATUALIZAR EMPRÉSTIMO                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//===============================================================================//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuCadastro(void) {
    
    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|       MÓDULO DE CADASTRO      |&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CADASTRO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   NOME COMPLETO:                                                            .//\n");
    printf("//.   CPF:                                                                      .//\n");
    printf("//.   EMAIL:                                                                    .//\n");
    printf("//.   NOME DE USUÁRIO:                                                          .//\n");
    printf("//.   SENHA:                                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuConsulta(void) {
    
    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      MÓDULO DE CONSULTA      |&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O NOME OU CPF DO USUÁRIO:                                          .//\n");
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuAtualizar(void) {
    
    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     MÓDULO DE ATUALIZAÇÃO      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZAÇÃO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   O QUE DESEJA ATUALIZAR?                                                   .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   N - NOME                                                                  .//\n");
    printf("//.   C - CPF                                                                   .//\n");
    printf("//.   E - EMAIL                                                                 .//\n");
    printf("//.   U - NOME DE USUÁRIO                                                       .//\n");
    printf("//.   S - SENHA                                                                 .//\n");
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuExcluirUser(void) {
    
    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&       MODULO DE EXCLUSÃO      &&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   EXCLUSÃO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O NOME DO USUÁRIO QUE DESEJA EXCLUIR                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   NOME:                                                                     .//\n");
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuCadastrarObra(void) {
    
    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!|        CADASTRO DE OBRA         |!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CADASTRO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   TÍTULO DA OBRA:                                                           .//\n");
    printf("//.   AUTOR:                                                                    .//\n");
    printf("//.   DATA DE PUBLICAÇÃO:                                                       .//\n");
    printf("//.   EDIÇÃO:                                                                   .//\n");
    printf("//.   ISBN:                                                                     .//\n");
    printf("//.                                                                             .//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuConsultarObra(void) {
    
    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//$$$$$$$$$$$$$$$$$$$$$$|        CONSULTA DE OBRA        |$$$$$$$$$$$$$$$$$$$$$$$//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   NOME OU ISBN DA OBRA :                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuAtualizarObra(void) {
    
    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("/|||||||||||||||||||||||       ATUALIZAÇÃO DE OBRA       ||||||||||||||||||||||||//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZAÇÃO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   O QUE DESEJA ATUALIZAR                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   T - TÍTULO DA OBRA:                                                       .//\n");
    printf("//.   A - AUTOR:                                                                .//\n");
    printf("//.   D - DATA DE PUBLICAÇÃO:                                                   .//\n");
    printf("//.   E - EDIÇÃO:                                                               .//\n");
    printf("//.   I - ISBN:                                                                 .//\n");
    printf("//.                                                                             .//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuExcluirObra(void) {
    
    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//$$$$$$$$$$$$$$$$$$$$$$|        EXCLUSÃO DE OBRA        |$$$$$$$$$$$$$$$$$$$$$$$//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   EXCLUSÃO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ISBN DA OBRA :                                                            .//\n");
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}