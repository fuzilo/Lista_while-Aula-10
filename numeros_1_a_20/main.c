#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
      setlocale(LC_ALL, "Portuguese");
      int contador;
            contador=0;

      while(contador <= 19)
    {
        contador=contador+1;
        printf("%d\n",contador);
    }

}
