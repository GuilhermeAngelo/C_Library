void relatorioCli(void){
    for(int i = 0; i < 10; i++){
        printf("\n\nNOME:        |    ATIVO:   |   FREQUENCIA P/mes:   |   MULTA:   |    Atrasos:\n\n");
        printf("Guilherme Angelo |    SIM      |       3 DIAS         |  0 REAIS    |      0     \n");
    }
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