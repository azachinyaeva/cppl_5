#include <iostream>
#include "HW2.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	int rows = 6;
	int cols = 10;
	auto table = Table<int>(rows, cols);

	std::cout << "Table size: " << table.get_size();
	std::cout << std::endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			table[i][j] = (i + 1) * (j + 1);
			std::cout << table[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
