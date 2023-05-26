#include <iostream>
#include <vector>
#include "Template.h"

void print(std::vector <int> vec)
{
	for (int i = 0; i < vec.size(); ++i)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int n = 4;
	std::cout << "[IN] " << n << std::endl;
	std::cout << "[OUT] " << power(n) << std::endl;
	double m = 1.5;
	std::cout << "[IN] " << m << std::endl;
	std::cout << "[OUT] " << power(m) << std::endl;
	std::vector<int> vec {-1, 4, 8};
	std::cout << "[IN] ";
	print(vec);
	std::cout << "[OUT] ";
	power(vec);
	print(vec);
	return 0;
}
