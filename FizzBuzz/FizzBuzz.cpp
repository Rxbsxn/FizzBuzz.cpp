// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "array.h"

int main()
{
  int * table = initializeArray();
  
  fillArrayWithNumbers(table);

  system("pause");
}

