#include "relatorios.h"
#include "usuario.h"
#include "obras.h"

void moduloUsuario(void) {
    char resposta;
        
    do {
        resposta = menuUsuario();
            
        switch(resposta){

        case '1':
        cadastrarUser();
        break;
            
        case '2':
        consultarUser();
        break;

        case '3':
        moduloAtualizarU();
        break;
                
        case '4':
        excluirUser();
        break;
                    
        }
    }while (resposta != '0');
}


void moduloAtualizarU(void) {
    char resposta;

    do {
        resposta = menuAtuUser();
        switch (resposta){
                
        case 'N':    
        atualizarNome();
        break;
                
        case 'C':
        atualizarCpf();
        break;

        case 'E':
        atualizarEmail();
        break;

        case 'U':
        atualizarNomeU();
        break;

        case 'S':
        atualizarSenha();
        break;

        }    
    } while (resposta != '0');
}

void moduloObras(void){
    char resposta;
    do {
        resposta = menuObras();
        switch(resposta) {

            case '1':
            cadastrarObra();
            break;

            case '2':
            consultarObra();
            break;

            case '3':
            moduloAtualizarO();
            break;
            
            case '4':
            excluirObra();
            break;

        }
    }while (resposta != '0');
}

void moduloAtualizarO(void){
    char resposta;    
    
    do {
        resposta = atualizarObra();
        switch (resposta){
            
            case 'T':    
                atualizarTitulo();
                break;
                
            case 'A':
                atualizarAutor();
                break;

            case 'D':
                atualizardatap();
                break;
            case 'E':
                atualizarEdicao();
                break;
            case 'I':
                atualizarIsbn();
                break;
        }
    } while (resposta != '0');
}
void moduloEmprestimo(void){
    
    char resposta;
    do{
        resposta = menuEmprestimo();
        switch(resposta) {

            case '1':
            cadastrarEmp();
            break;

            case '2':
            consultarEmp();
            break;

            case '3':
            atualizarEmp();
            break;
            
            case '4':
            devolverEmp();
            break;  

        }
    } while (resposta != '0');    
}

void moduloRelatorio(void){
    char resposta;
    do {
        resposta = menuRelatorio();
        switch(resposta){
            case '1':
            moduloRelatorioC();
            break;

            case '2':
            moduloRelatorioO();
            break;

            case '3':
            moduloRelatorioE();
            break;
        }
    } while(resposta != '0');
}

void moduloRelatorioC(void){
    char resposta;
    do {
        resposta = menuReUser();
        switch(resposta){
            case 'N':
            telaRelcli();
            break;
            
            case 'E':
            telaRelcliE();
            break;
        }
    } while(resposta != '0');
}

void moduloRelatorioO(void){
    char resposta;
    do {
        resposta = menuReObra();
        switch(resposta){
            case 'N':
            telaRelcliO();
            break;
        }
    } while(resposta != '0');
}

void moduloRelatorioE(void){
    char resposta;
    do {
        resposta = menuReEmp();
        switch(resposta){
            case 'N':
            relatorioEmp();
            break;
        }
    } while(resposta != '0');
}