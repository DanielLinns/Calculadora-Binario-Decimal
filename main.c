#include <stdio.h>
#include <stdlib.h>

//Univali - How

//Acad�micos: Daniel Augusto Linhares, Roges Ramos de Ramos, Kimberllin Rodrigues Martins, Fabricio Mello e Maria Eduarda Dutra Ramos

//Curso de Gradua��o em An�lise e Desenvolvimento de Sistemas - Universidade do Vale do Itaja�



// Decimal para bin�rio

void binario(int n) {
 if(n == 0)
   printf ("%d", n); //se o ultimo resultado for 0, ele ir� imprimir o n�mero 0.
   else {
    binario(n/2); //caso o 'n' for diferente de 0
    printf("%d", n % 2); //imprimir o resto da divis�o de n por 2
   }

}

int main(){
 int n; //variavel n

 printf ("Digite um valor decimal: "); //Vamos imprimir a pergunta na tela
 scanf ("%d", &n);

 binario(n);
}





