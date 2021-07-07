#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    vector<int> numbers;
    std::cout << "Please enter the numbers : ";
    std::string input = "";
    std::getline(std::cin, input);
    string word = "";
    for (auto x : input)
    {
        int inumber = 0;
        stringstream snumber(word);
        snumber >> inumber;
        if (x == ' ')
        {
            numbers.emplace_back(inumber);
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
    std::cout << "In the numbers ";
    for (auto x : numbers)
    {
        std::cout << x << ' ';
    }
    std::cout << "\n";

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
    return 0;
}
