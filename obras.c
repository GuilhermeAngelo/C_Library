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
    while(validaTitulo(obra->titulo) == 0){
        printf("//.   TITULO DIGITADO INVALIDO. POR FAVOR, DIGITE NOVAMENTE.\n\n");
        printf("//.   TITULO: ");
        scanf("%[^\n]",obra->titulo);
        getchar();
    }
    printf("//.   AUTOR: ");
    scanf("%[^\n]",obra->autor);
    getchar();
    while(validaAutor(obra->autor) == 0){
        printf("//.   NOME DIGITADO INVALIDO. POR FAVOR, DIGITAR NOVAMENTE.\n\n");
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
    scanf("%[^\n]",obra->edicao);
    getchar();
    while(validaEdicao(obra->edicao) == 0){
        printf("//.   EDICAO INVALIDA, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   EDICAO: ");
        scanf("%[^\n]", obra->edicao);
        getchar();
    }
    printf("//.   ISBN: ");
    scanf("%[0-9]",obra->isbn);
    getchar();
    while(validaIsbn(obra->isbn) == 0){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]", obra->isbn);
        getchar();
    }
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
    while(validaIsbn(pesquisa) == 0){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]", pesquisa);
        getchar();
    }
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
    Obras *busca;
    busca = (Obras*)malloc(sizeof(Obras));

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
    while(validaIsbn(isbn) == 0){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",isbn);
        getchar();
    }
    busca = buscarObra(isbn);
    atualizaTitulo(busca,isbn);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarAutor(void){
    char isbn[14];
    Obras* busca;
    busca = (Obras*)malloc(sizeof(Obras));

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
    while(validaIsbn(isbn) == 0){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",isbn);
        getchar();
    }
    busca = buscarObra(isbn);
    atualizaAutor(busca,isbn);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizardatap(void){
    char isbn[14];

    Obras* busca;
    busca = (Obras*)malloc(sizeof(Obras));

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
    while(validaIsbn(isbn) == 0){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",isbn);
        getchar();
    }
    busca = buscarObra(isbn);
    atualizaDatap(busca,isbn);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarEdicao(void){
    char isbn[14];
    Obras* busca;
    busca = (Obras*)malloc(sizeof(Obras));
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
    while(validaIsbn(isbn) == 0){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",isbn);
        getchar();
    }
    busca = buscarObra(isbn);
    atualizaEdicao(busca,isbn);
    free(busca);
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
    while(validaIsbn(isbn) == 0){
        printf("//.   ISBN INVALIDO, POR FAVOR DIGITE NOVAMENTE.\n\n");
        printf("//.   ISBN: ");
        scanf("%[^\n]",isbn);
        getchar();
    }
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

Obras* buscarObraEmp(char *isbn){
    
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
        if(strcmp(obra->isbn,isbn) == 0 && (obra->status == '0')){
            printf("\n//.   A OBRA JA FOI EMPRESTADA.\n");
            return NULL;    
        }
        if(strcmp(obra->isbn, isbn) == 0 && (obra->status != 'x') && (obra->status != '0')){
            fclose(fObra);
            return obra;
        }
    }
    fclose(fObra);
    return NULL;

}

Obras* buscarObraD(char *isbn){
    
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
        if(strcmp(obra->isbn, isbn) == 0 && (obra->status != 'x') && (obra->status == '0')){
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
        printf("\n\n-------------------OBRA CADASTRADA---------------------\n\n");
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
        while(fread(obraLida,sizeof(Obras),1,fObra)){
            if(strcmp(obraLida->isbn,isbn) == 0 && (obraLida->status != 'x') ){
                achou = 1;
                obraLida->status = 'x';
                fseek(fObra, -1*sizeof(Obras), SEEK_CUR);
                fwrite(obraLida,sizeof(Obras),1,fObra);
                free(obraLida);
                break;
            }
        }
        fclose(fObra); 
    }
}

void atualizaTitulo(Obras* obraLida, char*isbn){
    FILE *fObra;
    char tituloN[51];
    int achou = 0;

    if(obraLida == NULL){
        printf("\n\nA Obra NAO EXISTE\n");
    } else {
        fObra = fopen("Obras.dat", "r+b");

        if(fObra == NULL){
            printf("Não foi possível abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(fread(obraLida,sizeof(Obras),1,fObra)){
            if(strcmp(obraLida->isbn,isbn) == 0 && (obraLida ->status != 'x') ){
                achou = 1;
                printf("DIGITE O NOVO TITULO: ");
                scanf("%[^\n]",tituloN);
                getchar();
                while(validaTitulo(tituloN) == 0){
                    printf("//.   TITULO DIGITADO INVALIDO. POR FAVOR, DIGITE NOVAMENTE.\n\n");
                    printf("//.   TITULO: ");
                    scanf("%[^\n]",tituloN);
                    getchar();
                }
                strcpy(obraLida->titulo, tituloN);
                fseek(fObra, -1*sizeof(Obras), SEEK_CUR);
                fwrite(obraLida,sizeof(Obras),1,fObra);
                free(obraLida);
                break;
            }
        }
        fclose(fObra); 
    }
}

void atualizaAutor(Obras* obraLida, char*isbn){
    FILE *fObra;
    char autorN[61];
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
        while(fread(obraLida,sizeof(Obras),1,fObra)){
            if(strcmp(obraLida->isbn,isbn) == 0 && (obraLida ->status != 'x') ){
                achou = 1;
                printf("DIGITE O NOVO AUTOR: ");
                scanf("%[^\n]",autorN);
                getchar();
                while(validaAutor(autorN) == 0){
                    printf("//.   NOME DIGITADO INVALIDO. POR FAVOR, DIGITAR NOVAMENTE.\n\n");
                    printf("//.   AUTOR: ");
                    scanf("%[^\n]",autorN);
                    getchar();
                }
                strcpy(obraLida->autor,autorN);
                fseek(fObra, -1*sizeof(Obras), SEEK_CUR);
                fwrite(obraLida,sizeof(Obras),1,fObra);
                free(obraLida);
                break;
            } 
        } 
        fclose(fObra); 
    }
}

void atualizaDatap(Obras* obraLida, char*isbn){
    FILE *fObra;
    char datapN[11];
    int achou = 0,dia,mes,ano,dataValida;

    if(obraLida == NULL){
        printf("\n\nA OBRA NAO EXISTE\n");
    } else {
        fObra = fopen("Obras.dat", "r+b");

        if(fObra == NULL){
            printf("Não foi possível abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(fread(obraLida,sizeof(Obras),1,fObra)){
            if(strcmp(obraLida->isbn,isbn) == 0 && (obraLida ->status != 'x') ){
                achou = 1;
                printf("DIGITE A NOVA DATA DE PUBLICACAO: ");
                scanf("%[^\n]",datapN);
                getchar();
                dia = converteDia(datapN);
                mes = converteMes(datapN);
                ano = converteAno(datapN);
                dataValida = testaData(dia,mes,ano);
                while(dataValida == 0){
                    printf("//.   DATA INVALIDA, POR FAVOR DIGITE NOVAMENTE.\n\n");
                    printf("//.   DATA DE PUBLICACAO: ");
                    scanf("%[^\n]", datapN);
                    getchar();
                    dia = converteDia(datapN);
                    mes = converteMes(datapN);
                    ano = converteAno(datapN);
                    dataValida = testaData(dia,mes,ano);
                }
                strcpy(obraLida->datap,datapN);
                fseek(fObra, -1*sizeof(Obras), SEEK_CUR);
                fwrite(obraLida,sizeof(Obras),1,fObra);
                free(obraLida);
                break;
            }
        }
        fclose(fObra); 
    }
}

void atualizaEdicao(Obras* obraLida, char*isbn){
    FILE *fObra;
    char edicaoN[4];
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
        while(fread(obraLida,sizeof(Obras),1,fObra)){
            if(strcmp(obraLida->isbn,isbn) == 0 && (obraLida ->status != 'x') ){
                achou = 1;
                printf("DIGITE A NOVA EDICAO: ");
                scanf("%[^\n]",edicaoN);
                getchar();
                strcpy(obraLida->edicao,edicaoN);
                fseek(fObra, -1*sizeof(Obras), SEEK_CUR);
                fwrite(obraLida,sizeof(Obras),1,fObra);
                free(obraLida);
                break;
            }
        }
        fclose(fObra); 
    }
}

void attStatusD(Obras* obraLida, char*isbn){
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
        while(fread(obraLida,sizeof(Obras),1,fObra)){
            if(strcmp(obraLida->isbn,isbn) == 0 && (obraLida->status != 'x') && (obraLida->status == '0') ){
                obraLida->status = '1';
                fseek(fObra, -1*sizeof(Obras), SEEK_CUR);
                fwrite(obraLida,sizeof(Obras),1,fObra);
                free(obraLida);
                break;
            }
        }
        fclose(fObra); 
    }
}

void attStatus(Obras*obraLida, char*isbn){
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
        while(fread(obraLida,sizeof(Obras),1,fObra)){
            if(strcmp(obraLida->isbn,isbn) == 0 && (obraLida->status != 'x')){
                achou = 1;
                obraLida->status = '0';
                fseek(fObra, -1*sizeof(Obras), SEEK_CUR);
                fwrite(obraLida,sizeof(Obras),1,fObra);
                free(obraLida);
                break;
            }
        }
        fclose(fObra); 
    }
}

void relObras(void){
    FILE *fObra;
    Obras *obra;
    int count = 0,tam,tam2;
    char truncTitulo[26];
    char truncIsbn[26];

    obra = (Obras*)malloc(sizeof(Obras));
    fObra = fopen("Obras.dat", "rb");
    
    if(fObra == NULL){
        printf("Não foi possivel Abrir o arquivo...\n\n Fechando...");
        exit(1);
    } while (fread(obra,sizeof(Obras), 1, fObra)){
            if(obra->status != 'x'){
                count = count + 1;
                tam = strlen(truncTitulo);
                tam2 = strlen(truncIsbn);
                strncpy(truncTitulo,obra->titulo,tam);
                strncpy(truncIsbn,obra->isbn,tam);
                for(int i = tam; i < 25; i++){
                    truncTitulo[i] = ' ';
                }
                truncTitulo[25] = '\0';
                for(int i = tam2; i < 25; i++){
                    truncIsbn[i] = ' ';
                }
                truncIsbn[25] = '\0';
                printf("//.   %d - %-26s    %-26s\n", count,obra->titulo,obra->isbn);
            }
        }
        fclose(fObra);
        free(obra);
}

void relObrasD(void){
    FILE *fObra;
    Obras *obra;
    int count = 0,tam,tam2;
    char truncTitulo[26];
    char truncIsbn[26];

    obra = (Obras*)malloc(sizeof(Obras));
    fObra = fopen("Obras.dat", "rb");
    
    if(fObra == NULL){
        printf("Não foi possivel Abrir o arquivo...\n\n Fechando...");
        exit(1);
    } while (fread(obra,sizeof(Obras), 1, fObra)){
            if(obra->status != 'x' && obra->status != '0'){
                count = count + 1;
                tam = strlen(truncTitulo);
                tam2 = strlen(truncIsbn);
                strncpy(truncTitulo,obra->titulo,tam);
                strncpy(truncIsbn,obra->isbn,tam);
                for(int i = tam; i < 25; i++){
                    truncTitulo[i] = ' ';
                }
                truncTitulo[25] = '\0';
                for(int i = tam2; i < 25; i++){
                    truncIsbn[i] = ' ';
                }
                truncIsbn[25] = '\0';
                printf("//.   %d - %-26s    %-26s\n", count,obra->titulo,obra->isbn);
            }
        }
        fclose(fObra);
        free(obra);
}

void relObrasI(void){
    FILE *fObra;
    Obras *obra;
    int count = 0,tam,tam2;
    char truncTitulo[26];
    char truncIsbn[26];

    obra = (Obras*)malloc(sizeof(Obras));
    fObra = fopen("Obras.dat", "rb");
    
    if(fObra == NULL){
        printf("Não foi possivel Abrir o arquivo...\n\n Fechando...");
        exit(1);
    } while (fread(obra,sizeof(Obras), 1, fObra)){
            if(obra->status != 'x' && obra->status == '0'){
                count = count + 1;
                tam = strlen(truncTitulo);
                tam2 = strlen(truncIsbn);
                strncpy(truncTitulo,obra->titulo,tam);
                strncpy(truncIsbn,obra->isbn,tam);
                for(int i = tam; i < 25; i++){
                    truncTitulo[i] = ' ';
                }
                truncTitulo[25] = '\0';
                for(int i = tam2; i < 25; i++){
                    truncIsbn[i] = ' ';
                }
                truncIsbn[25] = '\0';
                printf("//.   %d - %-26s    %-26s\n", count,obra->titulo,obra->isbn);
            }
        }
        fclose(fObra);
        free(obra);
}

void apagarListaO(Obras **lista)
{
    Obras *obra;
    
    while (*lista != NULL)
    {
   	 obra = *lista;
   	 *lista = (*lista)->prox;
   	 free(obra);
    }   
}

void gerarRelatorioO(Obras **lista)
{
    FILE *fp;
    Obras *obra;
    
    apagarListaO(&(*lista));
    *lista = NULL;
    fp = fopen("Obras.dat","rb");
    if (fp == NULL)
    {
   	 printf("Erro na abertura do arquivo... \n");
   	 exit(1);
    }
    else
    {
   	 obra = (Obras *) malloc(sizeof(Obras));
   	 while (fread(obra, sizeof(Obras), 1, fp))
   	 {
        if ((*lista == NULL) || (strcmp(obra->titulo, (*lista)->titulo) < 0)) {
           if(obra->status != 'x'){
                obra->prox = *lista;
                *lista = obra;
          }
        } else  { 
          Obras* ant = *lista;
          Obras* atu = (*lista)->prox;

          if(obra->status != 'x' ){
          while ((atu != NULL) && (strcmp(atu->titulo, obra->titulo) < 0)) {
            ant = atu;
            atu = atu->prox;
          }
          ant->prox = obra;
          obra->prox = atu;
          }

        }
        obra = (Obras *) malloc(sizeof(Obras));
   	 }
   	 free(obra);
   	 fclose(fp);
    }
}

void exibirListaO(Obras *aux)
{
	while (aux != NULL)
	{   
        printf("----------------------------------------\n");
    	printf("TITULO: %s\n",aux->titulo);
        printf("DATA DE PUBLICACAO: %s\n",aux->datap);
        printf("EDICAO: %s\n",aux->edicao);
        printf("ISBN: %s\n",aux->isbn);
    	aux = aux->prox;
	}
    printf("----------------------------------------\n");
}

void gerarRelatorioIordem(Obras **lista)
{
    FILE *fp;
    Obras *obra;
    
    apagarListaO(&(*lista));
    *lista = NULL;
    fp = fopen("Obras.dat","rb");
    if (fp == NULL)
    {
   	 printf("Erro na abertura do arquivo... \n");
   	 exit(1);
    }
    else
    {
   	 obra = (Obras *) malloc(sizeof(Obras));
   	 while (fread(obra, sizeof(Obras), 1, fp))
   	 {
        if ((*lista == NULL) || (strcmp(obra->titulo, (*lista)->titulo) < 0)) {
           if(obra->status != 'x' && obra->status == '0'){
                obra->prox = *lista;
                *lista = obra;
          }
        } else  { 
          Obras* ant = *lista;
          Obras* atu = (*lista)->prox;

          if(obra->status != 'x' && obra->status == '0' ){
          while ((atu != NULL) && (strcmp(atu->titulo, obra->titulo) < 0)) {
            ant = atu;
            atu = atu->prox;
          }
          ant->prox = obra;
          obra->prox = atu;
          }

        }
        obra = (Obras *) malloc(sizeof(Obras));
   	 }
   	 free(obra);
   	 fclose(fp);
    }
}

void gerarRelatorioDordem(Obras **lista)
{
    FILE *fp;
    Obras *obra;
    
    apagarListaO(&(*lista));
    *lista = NULL;
    fp = fopen("Obras.dat","rb");
    if (fp == NULL)
    {
   	 printf("Erro na abertura do arquivo... \n");
   	 exit(1);
    }
    else
    {
   	 obra = (Obras *) malloc(sizeof(Obras));
   	 while (fread(obra, sizeof(Obras), 1, fp))
   	 {
        if ((*lista == NULL) || (strcmp(obra->titulo, (*lista)->titulo) < 0)) {
           if(obra->status != 'x' && obra->status != '0'){
                obra->prox = *lista;
                *lista = obra;
          }
        } else  { 
          Obras* ant = *lista;
          Obras* atu = (*lista)->prox;

          if(obra->status != 'x' && obra->status != '0'){
          while ((atu != NULL) && (strcmp(atu->titulo, obra->titulo) < 0)) {
            ant = atu;
            atu = atu->prox;
          }
          ant->prox = obra;
          obra->prox = atu;
          }

        }
        obra = (Obras *) malloc(sizeof(Obras));
   	 }
   	 free(obra);
   	 fclose(fp);
    }
}