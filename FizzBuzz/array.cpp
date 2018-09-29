#include "stdafx.h"
#include "array.h"

const int arraySize = 100;
int * initializeArray()
{
  int table[arraySize]{ 0 };
  return table;
}

void fillArrayWithNumbers(int table[])
{
  for (int i = 0; i < arraySize; i++)
  {
    *(table + i) = i;
  }
}
