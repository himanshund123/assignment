
#include <iostream>
using namespace std;

class Calculator
{
public:
  double add(double x, double y)
  {
    return x + y;
  }

  double subtract(double x, double y)
  {
    return x - y;
  }

  double multiply(double x, double y)
  {
    return x * y;
  }

  double divide(double x, double y)
  {
    return x / y;
  }
};

int main()
{
  double firstNumber, secondNumber;
  Calculator c;

  cout << "Enter the first number: " << endl;
  cin >> firstNumber;

  cout << "Enter the second number: " << endl;
  cin >> secondNumber;

  cout << "sum= " << c.add(firstNumber, secondNumber) << endl;

  cout << "sub = " << c.subtract(firstNumber, secondNumber) << endl;

  cout << "multi = " << c.multiply(firstNumber, secondNumber) << endl;

  cout << "division = " << c.divide(firstNumber, secondNumber) << endl;
}
