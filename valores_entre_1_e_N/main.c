#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
      setlocale(LC_ALL, "Portuguese");
      int contador, n;
      contador=0;
      printf("Digite um número inteiro qualquer\n");
      scanf("%d", &n);
      while(contador < n)
      {
          contador=contador+1;
          printf("%d\n",contador);
      }

}
