#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

//Assinaturas

void MenuSobre(void);
void MenuPrincipal(void);
void MenuUsuario(void);
void MenuObras(void);
void MenuEmprestimo(void);

//Programa Principal

int main(void) {
    
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    
    SetConsoleOutputCP(CPAGE_UTF8);

    MenuSobre();
    MenuPrincipal();
    MenuUsuario();
    MenuObras();
    MenuEmprestimo();

    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}

//Funções

void MenuSobre(void) {

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

void MenuPrincipal(void) {

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
void MenuUsuario(void) {
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

void MenuObras(void) {

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

void MenuEmprestimo(void) {    
    
    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//=====================|       MÓDULO DE EMPRÉSTIMOS      |======================//\n");
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
    printf("//===============================================================================//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}