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