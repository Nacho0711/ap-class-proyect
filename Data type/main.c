#include <stdio.h>

int main()
{

  int firstNumber;
  int secondNumber;

  printf("Ingrese primer valor");
  scanf("%d", &firstNumber);
  printf("Ingrese segundo valor");
  scanf("%d", &secondNumber);

  int Sum = firstNumber + secondNumber;

  int Res = firstNumber - secondNumber;

  int Mult = firstNumber * secondNumber;

  int Divi = firstNumber / secondNumber;

  printf("Ahora con suma: %d \n", Sum);
  printf("Ahora con resta: %d \n", Res);
  printf("Ahora con multiplicacion: %d \n", Mult);
  printf("Ahora con division: %d \n", Divi);

  return 0;
}