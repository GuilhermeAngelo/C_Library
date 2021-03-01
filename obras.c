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