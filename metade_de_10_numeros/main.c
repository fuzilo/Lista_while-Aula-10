#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
      setlocale(LC_ALL, "Portuguese");
      double contador, numero, valor;
      contador = 11;
      printf("Apresentarei a metade do valor dos pr�ximos 10 n�meros que voc� digitar\n");
      printf("Insira um n�mero\n");

      while(contador>=1)
      {
        scanf("%lf", &numero);
          valor=numero/2;
          printf("%lf\n",valor);
          contador=contador-1;
      }
}
