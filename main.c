#include <stdio.h>

int main(){

printf("Basic calculator Powered by Saint Bridge Inc.");

char operator;
double firstNumber, secondNumber;

printf("Enter first number: ");
scanf("%lf", &firstNumber);
printf("Enter second number: ");
scanf("%lf", &secondNumber);
printf("Choose the operation (+, -, *, /) : ");
scanf(" %c", &operator);


switch(operator){
  case '+':
    printf("%.2lf + %.2lf = %.2lf", firstNumber, secondNumber, firstNumber + secondNumber);
    break;
  case '-':
    printf("%.2lf - %.2lf = %.2lf", firstNumber, secondNumber, firstNumber - secondNumber);
    break;
  case '*':
    printf("%.2lf * %.2lf = %.2lf", firstNumber, secondNumber, firstNumber * secondNumber);
    break;  
  case '/':
  if(secondNumber != 0.0)
    printf("%.2lf / %.2lf = %.2lf", firstNumber, secondNumber, firstNumber / secondNumber);
  else
    printf("Error! Division by zero.\n");
    break;

  default:
  printf("Error! Invalid operator.\n");     
}



return 0;
}