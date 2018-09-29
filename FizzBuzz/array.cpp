#include "stdafx.h"
#include "array.h"

const int arraySize = 100;

void fillArrayWithNumbers(int table[])
{
  for (int i = 0; i < arraySize; i++)
  {
    table[i] = i;
  }
}
