#include <iostream>
#include <fstream>
#include <vector>
#include "Timer.h"
#include "search.h"
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

int main()
{
	std::vector<int> numbers;
	std::vector<int> search;

	readFile("numbers", numbers);
	readFile("search", search);

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

	return 0;
}
