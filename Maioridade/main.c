#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
      setlocale(LC_ALL, "Portuguese");
      int contador,idade,n;
      contador=1, n=0;
      printf("Insira a idade de 5 pessoas\n");

      while(contador<=5)
      {
          printf("Insira a idade da %dª pessoa\n",contador);
          scanf("%d",&idade);
          contador=contador+1;
          if (idade >= 18)
          {
              n=n+1;
          }
          else
      {

      }
      }
      printf("%d pessoas são maiores de idade",n );
}
