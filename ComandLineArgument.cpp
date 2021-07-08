#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> numbers;
	int number = 0;

	std::cout << "The numbers are : ";

	for (int i = 1; i < argc; i++)
	{
		std::cout << argv[i] << " ";
		stringstream convertNumber(argv[i]);
		convertNumber >> number;
		numbers.emplace_back(number);
	}
	std::cout << endl;

	int max = numbers[0];
	int min = numbers[0];
	for (auto num : numbers)
	{
		if (max < num)
		{
			max = num;
		}
		if (min > num)
		{
			min = num;
		}
	}
	std::cout << "The maximum number is " << max << std::endl;
	std::cout << "The minimum number is " << min << std::endl;
}