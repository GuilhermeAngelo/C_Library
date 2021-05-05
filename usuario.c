#include "validacoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"

void cadastrarUser(void) {
    Usuario *user;

    user = (Usuario*)malloc(sizeof(Usuario));

    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|       MODULO DE CADASTRO      |&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   CADASTRO                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   NOME COMPLETO: ");
    scanf("%[^\n]",user->nome);
    getchar();
    while(validaNome(user->nome) == 0){
        printf("//.   NOME INVALIDO.\n\n");
        printf("//.   NOME COMPLETO: ");
        scanf("%[^\n]",user->nome);
        getchar();
    }
    printf("//.   CPF - apenas numeros - : ");
    scanf("%[0-9]",user->cpf);
    getchar();
    while (validaCPF(user->cpf) == 0){
        printf("//.   CPF INVALIDO.\n\n");
        printf("//.   CPF - apenas numeros - : ");
        scanf("%[0-9]", user->cpf);
        getchar();
    }
    printf("//.   EMAIL: ");
    scanf("%[^\n]",user->email);
    getchar();
    while(validaEmail(user->email) == 0) {
        printf("//.   EMAIL INVALIDO.\n\n");
        printf("//.   EMAIL: ");
        scanf("%[^\n]",user->email);
        getchar();
    }
    printf("//.   LOGIN - MINIMO 4 CARACTERES - : ");
    scanf("%[^\n]",user->usuario);
    getchar();
    while (validaUsuario(user->usuario) == 0) {
        printf(".//   LOGIN INVALIDO.\n\n");
        printf(".//   LOGIN - MINIMO 4 CARACTERES -: ");
        scanf("%[^\n]",user->usuario);
        getchar();
    }
    printf("//.   SENHA - MINIMO 4 CARACTERES - : ");
    scanf("%[^\n]",user->senha);
    getchar();
    while(validaSenha(user->senha) == 0){
        printf(".//   SENHA INVALIDA.\n\n");
        printf("//.   SENHA - MINIMO 4 CARACTERES - : ");
        scanf("%[^\n]",user->senha);
        getchar();
    }
    user->status = '1';
    salvarUser(user);
    free(user);
    printf("//.                                                                             .//\n");
    printf("//-------------------------------------------------------------------------------//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void consultarUser(void) {
    char cpf[12];
    
    Usuario* busca;
    busca = (Usuario*)malloc(sizeof(Usuario));

    system("cls");
    printf("\n");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      MODULO DE CONSULTA      |&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//------------------------------------------------------------------------------.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   PESQUISA                                                                  .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O CPF DO USUARIO: ");
    scanf("%[^\n]",cpf);
    getchar();
    while(validaCPF(cpf) == 0){
        printf("//.   CPF INVALIDO.\n\n");
        printf("//.   CPF COMPLETO: ");
        scanf("%[^\n]",cpf);
        getchar();
    }
    busca = buscarUser(cpf);
    exibirUser(busca);
    free(busca);
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
    printf("//.   E - EMAIL                                                                 .//\n");
    printf("//.   U - LOGIN                                                                 .//\n");
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
    char cpf[12];
    char senha[16];
    Usuario* busca;
    
    busca = (Usuario*)malloc(sizeof(Usuario));

    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|      ATUALIZACAO DE NOME       |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O CPF: ");
    scanf("%[0-9]",cpf);
    getchar();
    while(validaCPF(cpf) == 0){
        printf("//.   CPF INVALIDO.\n\n");
        printf("//.   DIGITE O SEU CPF: ");
        scanf("%[0-9]");
        getchar();
    }
    busca = buscarUser(cpf);
    atualiza(busca,cpf);
    free(busca);
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
    scanf("%[^\n]",senha);
    getchar();
    while (validaSenha(senha) == 0) {
        printf("SENHA INVALIDA.\n\n");
        printf("DIGITE A SENHA - MINIMO 4 CARACTERES -: ");
        scanf("%[^\n]");
        getchar();
    }
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
    
    char cpf[12];
    Usuario* busca;
    busca = (Usuario*)malloc(sizeof(Usuario));

    system("cls");
    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|       ATUALIZACAO DE EMAIL       |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O CPF: ");
    scanf("%[^\n]",cpf);
    getchar();
    while(validaCPF(cpf) == 0) {
        printf("//.   EMAIL INVALIDO.\n\n");
        printf("//.   EMAIL: ");
        scanf("%[^\n]",cpf);
        getchar();
    }
    busca = buscarUser(cpf);
    atualizaEmail(busca,cpf);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    
}

void atualizarNomeU(void){
    system("cls");
    char cpf[12];
    Usuario* busca;
    busca = (Usuario*)malloc(sizeof(Usuario));

    printf("//===============================================================================//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&|     ATUALIZACAO DE LOGIN       |&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//##############################################################################.//\n");
    printf("//.                                                                             .//\n");
    printf("//.   ATUALIZACAO                                                               .//\n");
    printf("//.                                                                             .//\n");
    printf("//.   DIGITE O CPF: ");
    scanf("%[^\n]",cpf);
    getchar();
    while (validaCPF(cpf) == 0) {
        printf(".//   CPF INVALIDO.\n\n");
        printf(".//   CPF: ");
        scanf("%[^\n]",cpf);
        getchar();
    }
    busca = buscarUser(cpf);
    atualizaLogin(busca,cpf);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
   
}

void atualizarSenha(void){
    Usuario* busca;
    busca = (Usuario*)malloc(sizeof(Usuario));

    system("cls");
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
    busca = buscarUser(cpf);
    atualizaSenha(busca,cpf);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    
}

void excluirUser(void) {
    char cpf[12];

    Usuario* busca;

    busca = (Usuario*)malloc(sizeof(Usuario));

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
    busca = buscarUser(cpf);
    delUser(busca,cpf);
    free(busca);
    printf("//.                                                                             .//\n");
    printf("//###############################################################################//\n");
    printf("//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//\n");
    printf("//===============================================================================//\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
//funções de arquivos relacionadas aos usuáios

void salvarUser(Usuario* user){
    FILE *fUser;
    fUser = fopen("Usuarios.dat","ab");
    if(fUser == NULL){
        printf("Ops ocorreu um erro na abertura do aquivo\n\n");
        printf("Fechando o programa...");
        exit(1);

    }
    fwrite(user,sizeof(Usuario),1,fUser);
    fclose(fUser);

}

Usuario* buscarUser(char *cpf){
    
    FILE *fUser;
    Usuario* usuario;

    usuario = (Usuario*)malloc(sizeof(Usuario));

    fUser = fopen("Usuarios.dat","rb");
    if(fUser == NULL){
        printf("Nao foi possivel ler o aquivo\n\n");
        printf("Fechando o programa...");
        exit(1);
    }
    while(!feof(fUser)){
        fread(usuario,sizeof(Usuario),1, fUser);
        if(strcmp(usuario->cpf, cpf) == 0 && (usuario->status != 'x') ){
            fclose(fUser);
            return usuario;
        }
    }
    fclose(fUser);
    return NULL;

}

void exibirUser(Usuario* user){
    if(user == NULL){
        printf("\n\nO USUARIO NAO EXISTE.\n");
    } else{
        printf("\n\n-------------------USUARIO CADASTRADO---------------------\n\n");
        printf("|  NOME: %s                                                   \n", user->nome);
        printf("|  CPF: %s                                                    \n", user->cpf);
        printf("|  EMAIL: %s                                                  \n", user->email);
        printf("|  LOGIN: %s                                                  \n", user->usuario);
        if(user->status == '1'){
        printf("|  STATUS: %c                                                 \n", user->status);
        printf("\n------------------------------------------------------------\n");
        
        }
    }
    free(user);
}

void atualiza(Usuario* userLido, char*cpf){
    FILE *fUser;
    char nomeN[61];
    int achou = 0;

    if(userLido == NULL){
        printf("\n\nO USUARIO NAO EXISTE\n");
    } else {
        fUser = fopen("Usuarios.dat", "r+b");

        if(fUser == NULL){
            printf("Não foi possível abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(fread(userLido,sizeof(Usuario),1, fUser)){
            if(strcmp(userLido->cpf,cpf) == 0 && (userLido ->status != 'x') ){
                achou = 1;
                printf("DIGITE O NOVO NOME: ");
                scanf("%[^\n]",nomeN);
                getchar();
                while(validaNome(nomeN) == 0){
                    printf("//.   NOME INVALIDO.\n\n");
                    printf("//.   NOME COMPLETO: ");
                    scanf("%[^\n]",nomeN);
                    getchar();
                }
                strcpy(userLido->nome, nomeN);
                fseek(fUser, -1*sizeof(Usuario), SEEK_CUR);
                fwrite(userLido,sizeof(Usuario),1,fUser);
                free(userLido);
                break;
            }

        }
        fclose(fUser); 
    }
}

void delUser(Usuario* userLido, char*cpf){
    FILE *fUser;
    int achou = 0;

    if(userLido == NULL){
        printf("\n\nO USUARIO NAO EXISTE\n");
    } else {
        fUser = fopen("Usuarios.dat", "r+b");

        if(fUser == NULL){
            printf("Não foi possível abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(fread(userLido,sizeof(Usuario),1, fUser)){
            if(strcmp(userLido->cpf,cpf) == 0 && (userLido->status != 'x') ){
                achou = 1;
                userLido->status = 'x';
                fseek(fUser, -1*sizeof(Usuario), SEEK_CUR);
                fwrite(userLido,sizeof(Usuario),1,fUser);
                free(userLido);
                break;
            }
        } 
        fclose(fUser); 
    }
}

void atualizaEmail(Usuario* userLido, char*cpf){
    FILE *fUser;
    char emailN[61];
    int achou = 0;

    if(userLido == NULL){
        printf("\n\nO USUARIO NAO EXISTE\n");
    } else {
        fUser = fopen("Usuarios.dat", "r+b");

        if(fUser == NULL){
            printf("Não foi possível abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(fread(userLido,sizeof(Usuario),1, fUser)){
            if(strcmp(userLido->cpf,cpf) == 0 && (userLido->status != 'x') ){
                achou = 1;
                printf("DIGITE O NOVO EMAIL: ");
                scanf("%[^\n]",emailN);
                getchar();
                while(validaEmail(emailN) == 0) {
                    printf("//.   EMAIL INVALIDO.\n\n");
                    printf("//.   EMAIL: ");
                    scanf("%[^\n]",emailN);
                    getchar();
                }
                strcpy(userLido->email, emailN);
                fseek(fUser, -1*sizeof(Usuario), SEEK_CUR);
                fwrite(userLido,sizeof(Usuario),1,fUser);
                free(userLido);
                break;
            } 
        } 
        fclose(fUser); 
    }
}

void atualizaLogin(Usuario* userLido, char*cpf){
    FILE *fUser;
    char loginN[16];
    int achou = 0;

    if(userLido == NULL){
        printf("\n\nO USUARIO NAO EXISTE\n");
    } else {
        fUser = fopen("Usuarios.dat", "r+b");

        if(fUser == NULL){
            printf("Não foi possível abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(fread(userLido,sizeof(Usuario),1, fUser)){
            if(strcmp(userLido->cpf,cpf) == 0 && (userLido->status != 'x') ){
                achou = 1;
                printf("DIGITE O NOVO LOGIN: ");
                scanf("%[^\n]",loginN);
                getchar();
                while (validaUsuario(loginN) == 0) {
                    printf(".//   LOGIN INVALIDO.\n\n");
                    printf(".//   LOGIN - MINIMO 4 CARACTERES -: ");
                    scanf("%[^\n]",loginN);
                    getchar();
                }
                strcpy(userLido->usuario, loginN);
                fseek(fUser, -1*sizeof(Usuario), SEEK_CUR);
                fwrite(userLido,sizeof(Usuario),1,fUser);
                free(userLido);
                break;
            }
        } 
        fclose(fUser); 
    }
}

void atualizaSenha(Usuario* userLido, char*cpf){
    FILE *fUser;
    char senhaN[16];
    int achou = 0;

    if(userLido == NULL){
        printf("\n\nO USUARIO NAO EXISTE\n");
    } else {
        fUser = fopen("Usuarios.dat", "r+b");

        if(fUser == NULL){
            printf("Não foi possível abrir o arquivo.\n\n");
            printf("Fechando o programa...");
            exit(1);
        }
        while(fread(userLido,sizeof(Usuario),1, fUser)){
            if(strcmp(userLido->cpf,cpf) == 0 && (userLido->status != 'x') ){
                achou = 1;
                printf("DIGITE A NOVA SENHA: ");
                scanf("%[^\n]",senhaN);
                getchar();
                while(validaSenha(senhaN) == 0){
                    printf(".//   SENHA INVALIDA.\n\n");
                    printf("//.   SENHA - MINIMO 4 CARACTERES - : ");
                    scanf("%[^\n]",senhaN);
                    getchar();
                }
                strcpy(userLido->senha, senhaN);
                fseek(fUser, -1*sizeof(Usuario), SEEK_CUR);
                fwrite(userLido,sizeof(Usuario),1,fUser);
                free(userLido);
                break;
            }
        }
        fclose(fUser); 
    }
}

void relClientes(void){
    FILE *fCli;
    Usuario *cliente;
    int count = 0;

    cliente = (Usuario*)malloc(sizeof(Usuario));
    fCli = fopen("Usuarios.dat", "rb");
    
    if(fCli == NULL){
        printf("Não foi possivel Abrir o arquivo...\n\n Fechando...");
        exit(1);
    } while (fread(cliente,sizeof(Usuario), 1, fCli)){
            if(cliente->status != 'x'){
                count = count + 1;
                printf("//.   %d - %s\n", count,cliente->nome);
            }
        }
        fclose(fCli);
        free(cliente);
}

void relClientesE(void){
    FILE *fCli;
    Usuario *cliente;
    char nomeTrunc[26];
    char emailTrunc[27];
    int count = 0,tam,tam2;

    cliente = (Usuario*)malloc(sizeof(Usuario));
    fCli = fopen("Usuarios.dat", "rb");
    
    if(fCli == NULL){
        printf("Não foi possivel Abrir o arquivo...\n\n Fechando...");
        exit(1);
    } while (fread(cliente,sizeof(Usuario), 1, fCli)){
            if(cliente->status != 'x'){
                tam = strlen(cliente->nome);
                tam2 = strlen(cliente->email);
                strncpy(nomeTrunc, cliente->nome, tam);
                strncpy(emailTrunc, cliente->email, tam2);
                count = count + 1;
                for(int i = tam; i < 25; i++){
                    nomeTrunc[i] = ' ';
                }
                nomeTrunc[25] = '\0';
                for(int i = tam2; i < 26; i++){
                    emailTrunc[i] = ' ';
                }
                emailTrunc[26] = '\0';
                printf("//.   %d - %-25s   %-25s\n", count,nomeTrunc,emailTrunc);
            }
        }
        fclose(fCli);
        free(cliente);
}

void relClientesCom(void){
    FILE *fCli;
    Usuario *cliente;
    int count = 0;

    cliente = (Usuario*)malloc(sizeof(Usuario));
    fCli = fopen("Usuarios.dat", "rb");
    
    if(fCli == NULL){
        printf("Não foi possivel Abrir o arquivo...\n\n Fechando...");
        exit(1);
    } while (fread(cliente,sizeof(Usuario), 1, fCli)){
            if(cliente->status != 'x'){
                count = count + 1;
                printf("-------------------------------------------------\n");
                printf("//.   %d - NOME: %s\n", count,cliente->nome);
                printf("//.        CPF: %s\n", cliente->cpf);
                printf("//.        EMAIL: %s\n", cliente->email);
                printf("//.        USUARIO: %s\n", cliente->usuario);
                printf("//.        SENHA: %s\n", cliente->senha);
                printf("------------------------------------------------\n");
            }
        }
        fclose(fCli);
        free(cliente);
}


void apagarLista(Usuario **lista)
{
    Usuario *user;
    
    while (*lista != NULL)
    {
   	 user = *lista;
   	 *lista = (*lista)->prox;
   	 free(user);
    }   
}

void gerarRelatorio(Usuario **lista)
{
    FILE *fp;
    Usuario *user;
    
    apagarLista(&(*lista));
    *lista = NULL;
    fp = fopen("Usuarios.dat","rb");
    if (fp == NULL)
    {
   	 printf("Erro na abertura do arquivo... \n");
   	 exit(1);
    }
    else
    {
   	 user = (Usuario *) malloc(sizeof(Usuario));
   	 while (fread(user, sizeof(Usuario), 1, fp))
   	 {
        if ((*lista == NULL) || (strcmp(user->nome, (*lista)->nome) < 0)) {
           if(user->status != 'x'){
                user->prox = *lista;
                *lista = user;
          }
        } else  { 
          Usuario* ant = *lista;
          Usuario* atu = (*lista)->prox;

          if(user->status != 'x' ){
          while ((atu != NULL) && (strcmp(atu->nome, user->nome) < 0)) {
            ant = atu;
            atu = atu->prox;
          }
          ant->prox = user;
          user->prox = atu;
          }

        }
        user = (Usuario *) malloc(sizeof(Usuario));
   	 }
   	 free(user);
   	 fclose(fp);
    }    
}

void exibirLista(Usuario *aux)
{
	while (aux != NULL)
	{   
        printf("----------------------------------------\n");
    	printf("NOME: %s\n",aux->nome);
        printf("EMAIL: %s\n",aux->email);
        printf("LOGIN: %s\n",aux->usuario);
        printf("SENHA: %s\n",aux->senha);
    	aux = aux->prox;
	}
    printf("----------------------------------------\n");
}