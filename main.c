#include <stdio.h>
#include <stdlib.h>


// Decimal para binário

void binario(int n) {
 if(n == 0)
   printf ("%d", n); //se o ultimo resultado for 0, ele irá imprimir o número 0.
   else {
    binario(n/2); //caso o 'n' for diferente de 0
    printf("%d", n % 2);
   }


}

int main(){
 int n;

 printf ("Digite um valor decimal: ");
 scanf ("%d", &n);

 binario(n);

}

