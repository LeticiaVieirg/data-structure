//
#include <stdio.h>
int main(){  

    int soma(int a, int b){  
        int soma = 0;if (a > b){
        for (int i = b+1; i < b; i++){
            soma += i;
            }
         }
        else{
           for (int i = a+1; i <b; i++){
            soma += i;
        }
    }
    return soma;
}

int main () {
    int x = 5, y = 0;
    int res= soma(x, y);
    
    printf("%d", res);
    return 0;
}
