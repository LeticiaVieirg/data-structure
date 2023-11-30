
#include <stdio .h >
int main ( ) {
	int i ;

//o indice inicia no 1, e vai ate quando for menor ou igual a 100, e no proximo laço ele é multiplicado por 100

	for ( i =1 ; i <= 100 ; i *=100) {
		if ( i==30 ) {
			break ;
		}
		else {
			printf ("%2d\n" ,2* i ) ;
		}
		
	}
	printf ("Fim do laco !\n") ;
	return 0;
}


//Resposta: 2
//          200 
//          Fim do laco!
