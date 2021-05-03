#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
#include "obras.h"
#include "emprestimo.h"

char menuReUser(void) {
    char opcao;

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("/!!!!!!!!!!!!!!!!!!!!!!!      RELATORIO DE CLIENTES       !!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.                                                                             .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   QUAL RELATORIO DESEJA?                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   0 - SAIR                                                                  .//\n");
    printf("//.   N - LISTA DE NOMES DE CLIENTES - ORDEM DE CADASTRO                        .//\n");
    printf("//.   E - LISTA DE EMAIL DE CLIENTES - ORDEM DE CADASTRO                        .//\n");
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

char menuReObra(void) {
    char opcao;

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("/!!!!!!!!!!!!!!!!!!!!!!!      RELATORIO DE OBRAS         !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.                                                                             .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   QUAL RELATORIO DESEJA?                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   0 - SAIR                                                                  .//\n");
    printf("//.   N - EXIBIR LISTA DE OBRAS                                                 .//\n");
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

char menuReEmp(void) {
    char opcao;
    
    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("/!!!!!!!!!!!!!!!!!!!!!!!    RELATORIO DE EMPRESTIMOS     !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.                                                                             .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   QUAL RELATORIO DESEJA?                                                    .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   0 - SAIR                                                                  .//\n");
    printf("//.   N - EXIBIR LISTA DE EMPRESTIMOS                                           .//\n");
    printf("//.   I - EXIBIR LISTA DE ISBNS ALUGADOS                                        .//\n");
    printf("//.   C - EXIBIR LISTA DE CPF                                                   .//\n");
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

void telaRelcli(void){

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("/!!!!!!!!!!!!!!!!!!!!!!!         LISTA DE CLIENTES       !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   NOME:                                                                     .//\n\n");
    relClientes();
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    getchar();

}

void telaRelcliE(void){

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("/!!!!!!!!!!!!!!!!!!!!!!!         LISTA DE CLIENTES       !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   NOME:                           EMAIL:                                    .//\n\n");
    relClientesE();
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    getchar();

}

void telaRelcliO(void){

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("/!!!!!!!!!!!!!!!!!!!!!!!          LISTA DE OBRAS         !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   TITULO:                                                                   .//\n\n");
    relObras();
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    getchar();

}


void relatorioObra(void){
    int i;
    for(i = 0; i < 10; i++){
        printf("\n\nNOME:                               DATA DE PUBLICACAO:         AUTOR:           ISBN:           ED:   DISPONiVEL:   QNT:    QNT DE EMP: \n\n");
        printf("OS SEGREDOS DA ALGEBRA PARA ITA E IME    JULHO,2018      MILLER DIAS DE ARAUJO  1435678904321     1       SIM          1           0\n"); 
    }
    getchar();
}
void relatorioEmp(void){
    for(int i = 0; i < 10; i++){
        printf("USUARIO:     OBRA:       DIAS:       DATA DE ENTREGA:      QNT DE EMPRESTIMOS:\n\n");
        printf("guilehrm      Pi           7           20/03/2021                   1\n");
    }
    getchar();
}

