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
		while (begin <= end)
		{
			if ((begin > end) || (begin == end))
				return false;

			const int *mid = begin + (end - begin)/2;

			if (*mid == value)
				return true;
			else if (*mid < value)
					begin = ++mid;
			else if (*mid > value)
					end = mid;
		}
	return false;
}

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
		if ((begin > end) || (begin == end))
			return false;
		if ((end - begin) == 1)
		{
				if (*begin == value)
					return true;
				else if (*end == value)
					return true;
				else return false;
		}
		const int *mid = begin + (end - begin) / 2;

		if (*mid == value)
			return true;
		if (*mid < value)
			return binarySearchRecursive(++mid, end, value);
		else if (*mid > value)
			return binarySearchRecursive(begin, mid, value);

		return false;
}
