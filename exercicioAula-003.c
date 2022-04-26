#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float raio = 6 / 2, altura = 12, pi = 3.1415, volume = ((pi * pow(raio, 2)) * altura);

  printf("O Volume é de: %f", volume);

  return 0;
}