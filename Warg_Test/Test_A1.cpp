#include<iostream>

int FindNumber(int number, int find)
{
	int count = 0;
	int i = 1;

	if (find > number)
	{
		i++;
	}

	for (; i <= number; i++)
	{
		if (find % i == 0 && find / i <= number)
		{
			count++;
		}
	}

	return count;
}

int main()
{
	int size = 0;
	int find = 0;

	std::cout << "Enter the table size: ";
	std::cin >> size;
	std::cout << "Enter the desired number: ";
	std::cin >> find;

	std::cout << "Number " << find << " occurs " << FindNumber(size, find) << " times" << std::endl;

	system("pause");
	return 0;
}