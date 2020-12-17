#include<iostream>
#include<vector>


std::vector < std::vector <int> >  InitialTable(int num)
{
	std::vector < std::vector <int> > arr(num, std::vector <int>(num));	

	for (size_t i = 0; i < num; i++)
	{
		for (size_t j = 0; j < num; j++)
		{
			arr[i][j] = (i + 1) * (j + 1);			
		}			
	}

	return arr;
}

int FindNumber(int number, int find)
{
	std::vector < std::vector <int> > arr = InitialTable(number);

	int count = 0;

	for (size_t i = 0; i < number; i++)
	{
		for (size_t j = 0; j < number; j++)
		{
			if (arr[i][j] == find)
			{
				count++;
				continue;
			}			
		}		
	}

	return count;
}

int main()
{
	int size = 0;
	int find = 0;	

	std::cin >> size >> std::skipws>> find;

	std::cout << FindNumber(size, find);	
	

	system("pause");
	return 0;
}