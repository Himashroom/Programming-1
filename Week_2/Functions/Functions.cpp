#include "pch.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

void TestOneParFunctions(double angle);
void TestTwoParFunctions(double base, double power);
int main( )
{
	double angle{}; 
	//TestOneParFunctions(angle);

	double base{}, power{};
	std::cout << "Enter Base: ";
	std::cin >> base;

	std::cout << "Enter Power: ";
	std::cin >> power;

	TestTwoParFunctions(base, power);
	

	// Wait
	std::cout << "Push ENTER to quit\n";
	std::cin.get( );

	return 0;
}

void TestOneParFunctions(double angle)
{
	
	double pi{ 3.1415926535 };
	std::cout << "1 parameter\n";
	std::cout << "Angle: " << angle << std::endl;
	std::cout << "cos: " << cos(angle) << std::endl;
	angle += (pi / 4.0);
	std::cout << "Angle: " << angle << std::endl;
	std::cout << "cos: " << cos(angle) << std::endl;
	angle += (pi / 4.0);
	std::cout << "Angle: " << angle << std::endl;
	std::cout << "cos: " << cos(angle) << std::endl;
	angle += (pi / 4.0);
	std::cout << "Angle: " << angle << std::endl;
	std::cout << "cos: " << cos(angle) << std::endl;
	angle += (pi / 4.0);
	std::cout << "Angle: " << angle << std::endl;
	std::cout << "cos: " << cos(angle) << std::endl;

	std::cout << "Angle: " << angle * 2 << std::endl;
	std::cout << "cos: " << cos(angle * 2) << std::endl;

}

void TestTwoParFunctions(double base, double power)
{
	std::cout << pow(base, power) << std::endl;
	std::cout << "Hypotenuse length: " << (sqrt(pow(base, 2) + pow(power, 2))) << std::endl;
}

