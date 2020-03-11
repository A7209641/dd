#include <iostream>
#include <string>
#include <tuple>

void UsePair()
{
	std::pair<int, std::string> p1 = { 1, "kenny" };
	std::pair<float, char> p2 = std::make_pair(15.6f, 'b');

	std::cout << p1.first << ", " << p1.second << std::endl;
	std::cout << p2.first << ", " << p2.second << std::endl;
}

void UseTuple()
{
	std::tuple<int, double, std::string> t1(1, 15.4, "James");
	std::cout << std::get<0>(t1) << std::endl;
	std::cout << std::get<1>(t1) << std::endl;
	std::cout << std::get<2>(t1) << std::endl;

	std::tuple<int, float, char> t2 = std::make_tuple(2, 35.2f, 'a');
	std::cout << std::get<0>(t2) << std::endl;
	std::cout << std::get<1>(t2) << std::endl;
	std::cout << std::get<2>(t2) << std::endl;
}

void main()
{
	UsePair();
	UseTuple();
	system("pause");
	return;
}

