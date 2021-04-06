#include <string.h>
#include <math.h>

//função retirada de https://repl.it/@flaviusgorgonio/validacaoCPFc#main.c e feita por @flaviusgorgonio,2021.

int validaCPF(char cpf[]) {
  int tam, soma, d1, d2;
  int cpfInt[11];

  tam = strlen(cpf);
  if (tam != 11) {
    return 0;
  }
  for (int i = 0; i < 11; i++) {
    if (cpf[i] < '0' || cpf[i] > '9') {
      return 0;
    }
  }
  for (int i = 0; i < 11; i++) {
    cpfInt[i] = cpf[i] - '0';
  }

  soma = 0;
  for (int i = 0; i < 9; i++) {
    soma += cpfInt[i] * (10 - i);
  }
  d1 = 11 - (soma % 11);
  if (d1 == 10 || d1 == 11) {
    d1 = 0;
  }
  if (cpfInt[9] != d1) {
    return 0;
  }

  soma = 0;
  for (int i = 0; i < 10; i++) {
    soma += cpfInt[i] * (11 - i);
  }
  d2 = 11 - (soma % 11);
  if (d2 == 10 || d2 == 11) {
    d2 = 0;
  }
  if (cpfInt[10] != d2) {
    return 0;
  }
  
  return 1;
}

// lembrar de criar a variável para receber.

//modificada de https://repl.it/@flaviusgorgonio/ValidacaoDeEntradasc#valida.c, feita por @flaviusgoronio e modificada por @GuilheremAngelo

int validaNome(char nome[]){
  if (strlen(nome) <= 1 || strlen(nome) > 60){
    return 0;
  }
  for (int i = 0; nome[i] != '\0'; i++){
    if (i > 0) {
      if ((nome[i] == ' ') && (nome[i-1] >= 'A' && nome[i-1] <= 'Z' )){
        return 0;
      }
      if ((nome[i] == ' ' && nome[i-1] == ' ')){
        return 0;
      }
    } 
    if((nome[i]>= 'A' && nome[i] <= 'Z' && nome[0] >= 'A' && nome[0] <= 'Z')) {
      continue;
      } else if ((i > 0) && (nome[i] >= 'a' && nome[i] <= 'z')){
        continue;
      } else if(nome[i] == ' '){
          continue;
      } else{
      return 0;
    }
  } 
  return 1;
}
//modificada de https://repl.it/@flaviusgorgonio/ValidacaoDeEntradasc#valida.c, feita por @flaviusgoronio e modificada por @GuilheremAngelo
int validaUsuario(char usuario[]){
    if(strlen(usuario) < 4 || strlen(usuario) > 15){
    return 0;
  }
  for(int i = 0; usuario[i] != '\0'; i++){
    if(usuario[i] >= 'A' && usuario[i] <= 'Z'){
        continue;
    } else if(usuario[i] >= 'a' && usuario[i] <= 'z'){

    } else if(usuario[i] <= '9' && usuario[i] >= '0'){
        continue;
    } else {
        return 0;
    }
  }
  return 1;
}
//modificada de https://repl.it/@flaviusgorgonio/ValidacaoDeEntradasc#valida.c, feita por @flaviusgoronio e modificada por @GuilheremAngelo
int validaSenha(char senha[]){
  
  if(strlen(senha) < 4 || strlen(senha) > 15){
    return 0;
  }
  for(int i = 0; senha[i] != '\0'; i++){
    if(senha[i] >= 'A' && senha[i] <= 'Z'){
        continue;
    } else if(senha[i] >= 'a' && senha[i] <= 'z'){

    } else if(senha[i] <= '9' && senha[i] >= '0'){
        continue;
    } else {
        return 0;
    }
  }
  return 1;
}
//inspirações: https://pt.stackoverflow.com/questions/310096/como-validar-um-e-mail-em-c(apenas fundamentação para fazer a minha)//
//e https://repl.it/@flaviusgorgonio/ValidacaoDeEntradasc#valida.c, feita por @flaviusgoronio e modificada por @GuilheremAngelo//

int validaEmail(char email[]){

  int tam, num, ponto, arroba,letraM, letraMi,valido,valido1 = 1;
  int count = 0;
  tam = strlen(email);
  
  if(tam < 10 || tam > 60){
    return 0;
  }
  for(int i = 0; i < tam; i++){
    if (i > 0){
      if (email[i] == '.' && email[i - 1] == '.'){
        return 0;
      }if(email[i] == '@' && email[i - 1] == '@'){
        return 0;
      }
    }
    if (email[i] == '.'){
      ponto = 1;
    }
    if (email[i] == '@'){
      arroba = 1;
      count++;
    }
    if (email[i] <='z' && email[i] >= 'a'){
      letraMi = 1;
    }
    if (email[i] <='Z' && email[i] >= 'A'){
      letraM = 1;
    }
    if (email[i] <='9' && email[i] >= '0'){
      num = 1;
    }
    if((count == 1 && ponto == 1 && arroba == 1 && (letraM == 1 || letraMi == 1) == 1) ||
    (count == 1 && ponto == 1 && arroba == 1 && (letraM == 1 || letraMi == 1) == 1 && num)){
      valido = 1;
    } else{
      valido = 0;
    } 
    if(email[i] <='z' && email[i] >= 'a'){
      continue;
    } else if(email[i] <='Z' && email[i] >= 'A'){
      continue;
    } else if(email[i] <='9' && email[i] >= '0' && i > 0){
      continue;
    }else if(email[i] == '@' && email[0] != '@'){
      continue;
    } else if(email[i] == '.' && email[0] != '.'){
      continue;
    } else{
        valido1 = 0;
    }
  }
  if (valido == 1 && valido1 == 1){
    return 1;
  } else{
      return 0;
    }
}
//modificada de https://repl.it/@flaviusgorgonio/ValidacaoDeEntradasc#valida.c, feita por @flaviusgoronio e modificada por @GuilheremAngelo.
int validaAutor(char autor[]){
  if (strlen(autor) <= 1 || strlen(autor) > 60){
    return 0;
  }
  for (int i = 0; autor[i] != '\0'; i++){
    if (i > 0) {
      if ((autor[i] == ' ') && (autor[i-1] >= 'A' && autor[i-1] <= 'Z' )){
        return 0;
      }
      if ((autor[i] == ' ' && autor[i-1] == ' ')){
        return 0;
      }
    } 
    if((autor[i]>= 'A' && autor[i] <= 'Z' && autor[0] >= 'A' && autor[0] <= 'Z')) {
      continue;
      } else if ((i > 0) && (autor[i] >= 'a' && autor[i] <= 'z')){
        continue;
      } else if(autor[i] == ' '){
          continue;
      } else{
      return 0;
    }
  } 
  return 1;
}

int validaIsbn(char isbn[]){
  int tam;
  tam = strlen(isbn);

  if (tam < 13 || tam > 13){
    return 0;
  }
  for(int i = 0;i < tam; i++){
    if (isbn[i] <= '9' || isbn[i] >= '0'){
      continue;
    }
    else{
      return 0;
    }
  }
  return 1;
}

int validaEdicao(char edicao[]){
  int tam;
  tam = strlen(edicao);

  if (tam > 3 || tam < 1){
    return 0;
  }

  for(int i = 0; i < tam; i++){
    if (edicao[i] <= '9' && edicao[i] >= '0' ){
      continue;
    }
    else{
      return 0;
    }
  }
  return 1;
}

//Validacão data://

int converteDia(char datap[]){
  int diaInt[2],conDia;
  
  conDia = 0;

  for (int i = 0; i < 2 ; i++) {
    diaInt[i] = datap[i] - 48;
    int j = 1;
    conDia = conDia + (diaInt[i] * pow(10,j-i));
  }
  return conDia;
}

int converteMes(char datap[]){
  
  int mesInt[2], conMes = 0;
  char mes[3];
  int tam;
  int k = 0;

  tam = strlen(datap);
  for(int i = 3; i < 5; i++){
    mes[k] = datap[i];
    k++;
    }

  for(int i = 0; i < 2; i++){
    mesInt[i] = mes[i] - 48;
    int j = 1;
    conMes = conMes + mesInt[i] * pow(10,j-i);
  }
  return conMes;
}

int converteAno(char datap[]){
  
  char ano[5];
  int anoInt[4], conAno = 0;
  int tam;
  int k = 0;
  tam = strlen(datap);

  for(int i = 6; i < tam ; i++){
    ano[k] = datap[i];
    k++;
  }
  
  for(int i = 0 ; i < strlen(ano); i++){
    anoInt[i] = ano[i] - 48;
    int j = strlen(ano) - 1;
    conAno = conAno + anoInt[i] * pow(10,j-i);
  }
  return conAno;
}

//Feita por Flavius Gorgonio, 2021
int testaData(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12)
    return 0;
  if (mm == 2) {
    if (bissexto(aa)) 
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mm == 4 || mm == 6 || 
             mm == 9 || mm == 11) {
               maiorDia = 30;
  } else
    maiorDia = 31;

  if (dd < 1 || dd > maiorDia)
    return 0;

  return 1;
}

int bissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}