#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  /*float raio;
  printf("Digite o Raio: ");
  scanf("%f", &raio);

  float circuferencia = (3.1415 * pow(raio, 2));

  printf("O raio �: %f", circuferencia);*/

  short int idade = 21;
  float peso = 130.85, altura = 1.89;
  char inicial = 'a ';

  printf("Sua idade �: %d \n", idade);
  idade = 101;

  printf("Sua idade �: %d \n", idade);
  printf("Sua idade �: %.2f \n", peso);
  printf("A primeira letra �: %c", inicial);

  return 0;
}