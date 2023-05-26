#include <iostream>
#include <vector>
#include <algorithm>

class summa
{
	int sum;
public:
	summa() : sum{ 0 } {}

	int getSum()
	{
		return sum;
	}
	void operator() (int n)
	{
		sum+= n;
	}
};

class counter
{
	int count;
public:
	counter() : count{ 0 } {}

	int getCount()
	{
		return count;
	}
	void operator() (int n)
	{
		count++;
	}
};

int main()
{
	std::vector <int> vec{ 4, 1, 3, 6, 25, 54 };
	std::cout << "[IN] ";
	for (auto v : vec) { std::cout << v << " "; }
	std::cout << std::endl;
	counter c;
	summa s;
	c = std::for_each(vec.begin(), vec.end(), c);
	s = std::for_each(vec.begin(), vec.end(), s);
	std::cout << "[OUT] " << c.getCount() << std::endl;
	std::cout << "[OUT] " << s.getSum() << std::endl;
	return 0;
}
