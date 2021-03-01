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