// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "array.h"
#include "fizzbuzz_solver.h"

int main()
{
  const int arraySize = 100;
  int table[arraySize] = {};
  
  fillArrayWithNumbers(table);
  solveFizzBuzzForArray(table, arraySize);
  system("pause");
}

