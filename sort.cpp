#include <vector>
#include "sort.h"
/*void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}*/

void bubblesort(int *begin, const int *end)
{
  int i,j;
  int temp;
  for( i = 1; i < 1999; i++)
  {
    for( j = 0; j < 1999 - i; j++)
    {
      if (*(begin+j) > *(begin+j+1)) //&& ((begin+1) < end))
        {
          temp             = *(begin + j);
          *(begin + j)     = *(begin + j + 1);
          *(begin + j + 1) = temp;
        }
      }
  }
}
