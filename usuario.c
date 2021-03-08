#include "validacoes.h"

void cadastrarUser(void) {
    char nome[61];
    char cpf[12];
    char email[61];
    char usuario[16];
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
    scanf("%[^\n]",nome);
    getchar();
    while(validaNome(nome) == 0){
        printf("//.   NOME INVALIDO.\n\n");
        printf("//.   NOME COMPLETO: ");
        scanf("%[^\n]",nome);
        getchar();
    }
    printf("//.   CPF - apenas numeros - : ");
    scanf("%[0-9]",cpf);
    getchar();
    while (validaCPF(cpf) == 0){
        printf("//.   CPF INVALIDO.\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[0-9]", cpf);
        getchar();
    }
    printf("//.   EMAIL: ");
    scanf("%[^\n]",email);
    getchar();
    while(validaEmail(email) == 0) {
        printf("//.   EMAIL INVALIDO.\n\n");
        printf("//.   EMAIL: ");
        scanf("%[^\n]",email);
        getchar();
    }
    printf("//.   NOME DE USUARIO - MINIMO 4 CARACTERES - : ");
    scanf("%[^\n]",usuario);
    getchar();
    while (validaUsuario(usuario) == 0) {
        printf(".//   NOME DE USUARIO INVALIDO.\n\n");
        printf(".//   NOME DE USUARIO - MINIMO 4 CARACTERES -: ");
        scanf("%[^\n]",usuario);
        getchar();
    }
    printf("//.   SENHA - MINIMO 4 CARACTERES - : ");
    scanf("%[^\n]",senha);
    getchar();
    while(validaSenha(senha) == 0){
        printf(".//   SENHA INVALIDA.\n\n");
        printf("//.   SENHA - MINIMO 4 CARACTERES - : ");
        scanf("%[^\n]",senha);
        getchar();
    }
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void consultarUser(void) {
    char consulta[61];

    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      MODULO DE CONSULTA      |&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O NOME DO USUÁRIO: ");
    scanf("%[A-Za-zÁÉÍÓÚ0-9 ÂÊÎÔÃÕáéíóúãõâêîô]",consulta);
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
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",nomeA);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",senha);
    printf("//.   DIGITE O NOME NOVO: ");
    getchar();
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",nomeN);
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
    printf("//.   CPF REGISTRADO - apenas numeros - : ");
    scanf("%[0-9]",cpfA);
    getchar();
    while (validaCPF(cpfA) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   CPF REGISTRADO - apenas numeros - : ");
        scanf("%[0-9]", cpfA);
        getchar();
    }
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",senha);
    getchar();
    printf("//.   DIGITE O NOVO CPF - APENAS NUMEROS - : ");
    scanf("%[0-9]",cpfN);
    getchar();
    while (validaCPF(cpfN) == 0){
        printf("//.   CPF INVALIDO\n\n");
        printf("//.   DIGITE O NOVO CPF- APENAS NUMEROS - : ");
        scanf("%[0-9]", cpfN);
        getchar();
    }
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
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ@0-9.]",emailA);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",senha);
    getchar();
    printf("//.   DIGITE O NOVO EMAIL: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ@0-9.]",emailN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    
}

void atualizarNomeU(void){
    system("cls");
    char nomeA[16];
    char nomeN[16];
    char senha[16];
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     ATUALIZACAO  NOME_USU      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O NOME DE USUARIO ANTIGO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ0-9]",nomeA);
    getchar();
    printf("//.   SENHA: ");
    scanf("%[A-Za-z0-9]",senha);
    getchar();
    printf("//.   DIGITE O NOVO NOME DE USUARIO: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕa-záéíóúâêôãõ0-9]",nomeN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarSenha(void){
    
    system("cls");
    char senhaN[16];
    char cpf[12];
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      ATUALIZACAO DE SENHA      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
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
    printf("//###############################################################################//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}