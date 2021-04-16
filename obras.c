#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "validacoes.h"
#include"obras.h"

void cadastrarObra(void) {

    Obras *obra;
    obra = (Obras*)malloc(sizeof(Obras));

    int dia,mes,ano, dataValida;

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!        CADASTRO DE OBRA         !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CADASTRO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   TITULO DA OBRA: ");
    scanf("%[^\n]",obra->titulo);
    getchar();
    printf("//.   AUTOR: ");
    scanf("%[^\n]",obra->autor);
    getchar();
    while(validaAutor(obra->autor) == 0){
        printf("//.   O NOME DIGITADO INVALIDO. POR FAVOR, DIGITAR NOVAMENTE.\n\n");
        printf("//.   AUTOR: ");
        scanf("%[^\n]",obra->autor);
        getchar();
    }
    printf("//.   DATA DE PUBLICACAO: ");
    scanf("%[^\n]",obra->datap);
    getchar();

    dia = converteDia(obra->datap);
    mes = converteMes(obra->datap);
    ano = converteAno(obra->datap);
    dataValida = testaData(dia,mes,ano);
    while(dataValida == 0){
        printf("//.   DATA INVALIDA, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   DATA DE PUBLICACAO: ");
        scanf("%[^\n]", obra->datap);
        getchar();
        dia = converteDia(obra->datap);
        mes = converteMes(obra->datap);
        ano = converteAno(obra->datap);
        dataValida = testaData(dia,mes,ano);
    }
    printf("//.   EDICAO: ");
    scanf("%[0-9]",obra->edicao);
    getchar();
    printf("//.   ISBN: ");
    scanf("%[0-9]",obra->isbn);
    getchar();
    obra->status = '1';
    salvarObra(obra);
    free(obra);
    printf("//.                                                                             .//\n");
    printf("//.-----------------------------------------------------------------------------.//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void consultarObra(void) {
    char pesquisa[14];
    Obras* busca;

    busca = (Obras*)malloc(sizeof(Obras));

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!        CONSULTA DE OBRA        !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ISBN DA OBRA : ");
    scanf("%[0-9]",pesquisa);
    getchar();
    busca = buscarObra(pesquisa);
    exibirObra(busca);
    free(busca);
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
    scanf("%[0-9]",isbn);
    getchar();
    printf("//.   DIGITE O NOME ATUAL DA OBRA: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",obraA);
    getchar();
    printf("//.   DIGITE O NOVO NOME DA OBRA: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ0-9]",obraN);
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
    scanf("%[0-9]",isbn);
    getchar();
    printf("//.   DIGITE O NOME DO ANTIGO AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",autorA);
    getchar();
    printf("//.   DIGITE O NOME DO NOVO AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",autorN);
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
    scanf("%[0-9]",isbn);
    getchar();
    printf("//.   DIGITE A DATA ANTIGA: ");
    scanf("%[0-9/]",dataA);
    getchar();
    printf("//.   DIGITE A DATA NOVA: ");
    scanf("%[0-9/]",dataN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarEdicao(void){
    char isbn[14];
    char edicaoA[4];
    char edicaoN[4];
    system("cls");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     ATUALIZACAO DE EDICAO      |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O ISBN DA OBRA: ");
    scanf("%[0-9]",isbn);
    getchar();
    printf("//.   DIGITE O VAOR DA ANTIGA EDICAO: ");
    scanf("%[0-9]",edicaoA);
    getchar();
    printf("//.   DIGITE O VALOR DA NOVA EDICAO: ");
    scanf("%[0-9]",edicaoN);
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
    scanf("%[0-9]",isbnA);
    getchar();
    printf("//.   DIGITE O NOME DO AUTOR: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÃÕ a-záéíóúâêôãõ]",autor);
    getchar();
    printf("//.   DIGITE O ISBN DA OBRA: ");
    scanf("%[0-9]",isbnN);
    getchar();
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void excluirObra(void) {
    char isbn[14];

    Obras* busca;
    busca = (Obras*)malloc(sizeof(Obras));

    system("cls");
    printf("\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!        EXCLUSAO DE OBRA        !!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   EXCLUSAO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ISBN DA OBRA : ");
    scanf("%[0-9]",isbn);
    getchar();
    busca = buscarObra(isbn);
    delObra(busca,isbn);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

//Adaptada de @flaviusgoronio//

void salvarObra(Obras *obra){
    FILE *fObra;
    fObra = fopen("Obras.dat","ab");
    if(fObra == NULL){
        printf("Ops ocorreu um erro na abertura do aquivo\n\n");
        printf("Fechando o programa...");
        exit(1);
    }
    fwrite(obra,sizeof(Obras),1,fObra);
    fclose(fObra);
}

//Adaptada de @flaviusgoronio//
Obras* buscarObra(char *isbn){
    
    FILE *fObra;
    Obras* obra;

    obra = (Obras*)malloc(sizeof(Obras));

    fObra = fopen("Obras.dat","rb");
    if(fObra == NULL){
        printf("Nao foi possivel ler o aquivo\n\n");
        printf("Fechando o programa...");
        exit(1);
    }
    while(!feof(fObra)){
        fread(obra,sizeof(Obras),1,fObra);
        if(strcmp(obra->isbn, isbn) == 0 && (obra->status != 'x')){
            fclose(fObra);
            return obra;
        }
    }
    fclose(fObra);
    return NULL;

}
//Adaptada de @flaviusgoronio//
void exibirObra(Obras* obra){
    if(obra == NULL){
        printf("\n\nA OBRA NAO EXISTE.\n");
    } else{
        printf("\n\n-------------------USUARIO CADASTRADO---------------------\n\n");
        printf("|  TITULO: %s                                                   \n", obra->titulo);
        printf("|  AUTOR: %s                                                    \n", obra->autor);
        printf("|  DATA DE PUBLICACAO: %s                                                  \n", obra->datap);
        printf("|  EDICAO: %s                                                  \n", obra->edicao);
        printf("|  ISBN: %s                                                  \n", obra->isbn);
        printf("|  STATUS: %c                                                 \n", obra->status);
        printf("\n----------------------------------------------------------\n\n");
        
        
    }
    free(obra);
}
//Adaptada das funções anteriores feitas por @flaviusgoronio//
void delObra(Obras* obraLida, char*isbn){
    FILE *fObra;
    int achou = 0;

    if(obraLida == NULL){
        printf("\n\nA OBRA NAO EXISTE\n");
    } else {
        fObra = fopen("Obras.dat", "r+b");

        if(fObra == NULL){
            printf("Não foi possível abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(!feof(fObra)){
            if(strcmp(obraLida->isbn,isbn) == 0 && (obraLida->status != 'x') ){
                achou = 1;
                obraLida->status = 'x';
                fseek(fObra, -1*sizeof(Obras), SEEK_CUR);
                fwrite(obraLida,sizeof(Obras),1,fObra);
                break;
            } free(obraLida);
        }
        fclose(fObra); 
    }
}