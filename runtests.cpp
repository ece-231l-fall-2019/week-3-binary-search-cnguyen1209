#include <iostream>
#include <fstream>
#include <vector>
#include "Timer.h"
#include "search.h"
#include "sort.h"
using namespace std;

void readFile(string filename, vector<int>& set)
{
	ifstream fin(filename);
	while(true)
	{
		int num;
		fin >> num;
		if (fin.eof())
			break;
		set.push_back(num);
	}
	fin.close();
}

void writeFile(string filename, vector<int>& set)
{
	ofstream fout(filename);

  for (unsigned int i = 0 ; i < set.size(); i++)
	{
			fout << set[i] << endl;
	}
	fout.close();
}

int main()
{
	std::vector<int> numbers;
	std::vector<int> search;
	numbers.reserve(1000000);
	search.reserve(2000);
	readFile("numbers", numbers);
	readFile("search", search);

	bubblesort(search.data(), search.data() + search.size());
	writeFile("searchsorted", search);

	{
		Timer timer("Time to linear search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to linear search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to binary search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to binary search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers.data(), numbers.data() + numbers.size(), search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to binary search all values (recursive): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearchRecursive(numbers.data(), numbers.data() + numbers.size(), search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	return 0;
}
