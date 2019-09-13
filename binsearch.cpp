#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int value)
{
	int left = 0;
	int right = set.size() - 1;
	while (left <= right)
	{
			int mid = (left + right)/2;
			if (set[mid] == value)
						return true;
			if (set[mid] > value)
						right = mid - 1;
			else
						left = mid + 1;
	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
		while (begin < end)
		{
			const int *mid = begin + (end - begin)/2;

			if (*mid == value)
			return true;
			if (*begin == value)
			return true;
			if (*end == value)
			return true;
			if (*mid < value)
					begin = mid + 1;
			else if (*mid > value)
					end = mid - 1;
		}
	return false;
}

/*bool binarySearchRecursive (const int *begin, const int *end, int value)
{
		if ((end - begin) == 0)
		return false;
		const int *mid = begin + (end - begin)/2;

		if (*mid == value)
			return true;
		else if (*mid < value)
			binarySearchRecursive(mid++, end, value);
		else if (*mid > value)
				binarySearchRecursive(begin, mid - 1, value);

	 return false;
}*/
