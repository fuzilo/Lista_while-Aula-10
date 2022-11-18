#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
      setlocale(LC_ALL, "Portuguese");
      int contador;
      double soma, numero;
      contador=1;

      printf("Vamos somar cada um dos 10 números que você digitar\n");
      while( contador<=10)
      {
        printf("Digite o %dº numero\n",contador);
        scanf("%lf",&numero);
        soma=soma+numero;
        printf("%lf\n", soma);

        contador=contador+1;

      }
      printf("O total da soma é de %lf",soma);
}

