// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "array.h"
#include "fizzbuzz_solver.h"

int main()
{
  int table[100] = {};
  
  fillArrayWithNumbers(table);

  for (int i = 0; i < 100; i++) {
    std::cout << i << " " <<table[i] << std::endl;
  }

  system("pause");
}

