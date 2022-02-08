#include <iostream>

//FUNCTION TEMPLATE
template <class T>

T GetMax(T a, T b) {
	return (a > b ? a : b);
}

int main()
{
	int i1 = GetMax(4, 6);
	float f2 = GetMax(4.35, 3.78);
	double d3 = GetMax(25.5678, 6.3466);
	char c4 = GetMax('C', 'R');

	std::cout << i1 << std::endl << f2 << std::endl << d3 << std::endl << c4 << std::endl;
}