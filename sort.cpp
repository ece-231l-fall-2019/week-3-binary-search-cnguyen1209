#include <vector>
#include "sort.h"
using namespace std;
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int *begin, const int *end)
{
	for (int *i = begin; i < end; i++)
		for (int *j = (i + 1); j < end; j++)
		{
			if (*i > *j)
				swap(i,j);
		}
}
