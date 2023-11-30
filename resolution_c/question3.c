# include <stdio .h>

int main ( ) {
       int N_ant , N_prox , N, N_atual
       N_ant = N_atual =1;
       for(i=1,i <=N,i++){
              N_prox = N_ant + N_atual ;
              N_ant = N_atual ;
              N_atual = N_prox ;
       printf ("Fim do laco !\n");
       return
}

//Identique os erros de compilacao que seriam detectados no seguinte programa se eles existirem:

//Erros: 1° Encontrado na linha 11, pois o return tem que ser equivalente a zero; Correto: return 0;
//      2° Esta faltando uma das chaves ("}"), nesse caso, o int main não encerraria;
//      3° Quando igualamos os valores das variáveis na linha 5 o objetivo é que ambos sejam iguais a um, porém isso não
//aconteceria pois na linguagem C antes de definirmos um valor para uma variável ela já vem com um valor aleatório e isso seria uma falha de lógica;
//       4° Conteúdos dentro dos parenteses do for, tendo em vista que deve ser ponto e vírgula ao invés de virgulas.
//       5° Encontrado na linha 4, pois não foi colocado o ponto e vírgula ao final da linha.
