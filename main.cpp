#include <iostream>


int Addition(int x, int y)
{
  return x + y;
}

int Subtraction(int x, int y)
{
  return x - y;
}
int Multiplication(int x, int y)
{
  return x * y;
}
int Division(int x, int y)
{
  return x / y;
}
int main()
{

  int num1, num2;
  char operation;

  std::cout << "Enter your first number: ";
  std::cin >> num1;

  std::cout << "Enter your operation: ";
  std::cin >> operation;

  std::cout << "Enter your second number: ";
  std::cin >> num2;


  switch(operation)
  {
    case '+':
    std::cout << Addition(num1, num2) << std::endl;
    break;

    case '-':
    std::cout << Subtraction(num1, num2) << std::endl;
    break;

    case '/':
    std::cout << Division(num1, num2) << std::endl;
    break;

    case '*':
    std::cout << Multiplication(num1, num2) << std::endl;
    break;

    default:
    std::cout << "Make sure that you pick a valid operator" << std::endl;
  }
  return 0;
}