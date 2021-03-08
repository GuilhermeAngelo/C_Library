#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#include "menus.h"
#include "usuario.h"
#include "obras.h"
#include "emprestimo.h"
#include "modulos.h"

//Programa Principal

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    menuSobre();
    char op;
    
    do {
        op = menuPrincipal();

        switch (op){
            case '1':   moduloUsuario();   
                        break;
            case '2':   moduloObras();
                        break;
            case '3':   moduloEmprestimo();
                        break;
        }
    } while (op != '0');
    return 0;
    
}
