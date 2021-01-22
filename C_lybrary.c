#include <stdio.h>
#include <locale.h>
#include <windows.h>

void MenuSobre(void);

int main(void) {
    
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    
    SetConsoleOutputCP(CPAGE_UTF8);

    MenuSobre();

    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}

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
    printf("//* de Disponibilidade de obras, Sistema de Controle de Prazos de Empréstimos- *//\n");
    printf("//* mos, entre outras funcionalidades.                                         *//\n");
    printf("//*                                                                            *//\n");
    printf("//******************************************************************************//\n");
    printf("//                                                                              //\n");
    printf("//------------------------------------------------------------------------------//\n");


}