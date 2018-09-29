#include "stdafx.h"
#include "fizzbuzz_solver.h"
#include <iostream>

using namespace std;

void solveFizzBuzzForArray(int table[], int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    processFizzBuzz(table[i]);
  }
}

void processFizzBuzz(int number)
{
  if (isFizzBuzz(number))
    cout << "FizzBuzz" << endl;
  else if (isBuzz(number))
    cout << "Buzz" << endl;
  else if (isFizz(number))
    cout << "Fizz" << endl;
  else
   cout << number << endl;
}

bool isFizzBuzz(int number)
{
  return number % 15 == 0;
}

bool isBuzz(int number)
{
  return number % 5 == 0;
}

bool isFizz(int number)
{
  return number % 3 == 0;
}
