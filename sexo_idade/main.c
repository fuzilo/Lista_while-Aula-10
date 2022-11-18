#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
      setlocale(LC_ALL, "Portuguese");
      char nome[63];
      int idade, contador, sexo;
      contador=1;
      printf("Identificador de sexo e idade\n");
      while( contador <=3)
      {
          printf("Insira o nome da %dª pessoa\n",contador);
          scanf("%s",&nome);
          printf("Defina o sexo da %dª pessoa, 1 para Masculino ou 2 para Feminino\n",contador);
          scanf("%d",&sexo);
          printf("Coloque a idade da %dª pessoa\n",contador);
          scanf("%d",&idade);
        if(sexo==1 && idade>=21)
        {
            printf("%s Atende ao Requisito\n",nome);
        }

        contador=contador+1;

      }



}
