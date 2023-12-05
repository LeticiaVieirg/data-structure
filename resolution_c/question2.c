# include < stdio.h >

//a variavel f recebe como parametro uma matriz com 3 linhas e 3 colunas
//realiza-se calculos de acordo com a posição de cada numero
int f (int mat [3][3]) {
  return ( mat [0][0]* mat [1][1]* mat [2][2]) + 
    ( mat [0][1]* mat [1][2]* mat [2][0]) +  (mat [0][2]* mat [1][0]* mat [2][1]) - 
    ( mat [0][1]* mat [0][1]* mat [2][2]) - 
    ( mat[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}

// no menu principal sao dados os numeros que compoem a matriz
// tais numeros vao para f, onde é realizado calculos da seguinte maneira :  

//calculos
//       [0 1 0 ]   [0*1*1]+[1*-1*4]+
//matriz [3 1 -1] = [0*3*0]-[1*1*1]-  =[0]-[4]+[0]-[1]-[0]-[0] = -5
//       [4 0 1 ]   [0*-1*0]-[0*1*4]    

int main ( void ) {
  int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
  int de = f ( m ) ;
  printf (" Resultado = \t %d", de ) ;
  return 0;
}

//é mostrado na tela a seguinte mensagem: Resultado = -5.                                                                                                                                                                                  
