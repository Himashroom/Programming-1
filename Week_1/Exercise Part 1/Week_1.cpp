// Week_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


int main()
{
    int num69{ 69 };
    char symb69{ 'f' };
    bool falsity{ true };
    float decim{ 6.9 };
    double trouble{ 6.9 };

    std::cout << "(" << num69 << ")" << std::endl;
    std::cout << symb69 << std::endl;
    std::cout << falsity << std::endl;
    std::cout << decim << std::endl;
    std::cout << trouble << std::endl;

    num69 = 32;
    symb69 = 's';
    falsity = false;
    decim = 0.69f;
    trouble = 0.6969;

    std::cout << "(" << num69 << ")" << std::endl;
    std::cout << symb69 << std::endl;
    std::cout << falsity << std::endl;
    std::cout << decim << std::endl;
    std::cout << trouble << std::endl;

    /*std::cout << "Enter a number";
    std::cin >> num69;
    std::cout << "You entered: " << num69 <<std::endl;

    std::cout << "Enter a symbol";
    std::cin >> symb69;
    std::cout << "You entered: " << symb69 << std::endl;

    std::cout << "Enter a boolean";
    std::cin >> falsity;
    std::cout << "You entered: " << std::boolalpha << falsity << std::endl;

    std::cout << "Enter a decimal number ";
    std::cin >> decim;
    std::cout << "You entered: " << decim << std::endl;

    std::cout << "Enter a double number";
    std::cin >> trouble;
    std::cout << "You entered: " << trouble << std::endl;*/

    /*int result{ 3 * ++num69 / 9 - 25 % 10};
    std::cout << result << std::endl;
    std::cout << num69 << std::endl;*/

    /*float r{}, g{}, b{}, a{};
    std::cout << "RGBA in [0,255]?";
    std::cin >> r >> g >> b >> a;
    std::cout << "RGBA in [0.0f, 1.0f]: \n";
    std::cout << r / 255.f << std::endl;
    std::cout << g / 255.f << std::endl;
    std::cout << b / 255.f << std::endl;
    std::cout << a / 255.f << std::endl;*/

    int timePeriod{};
    std::cout << "Seconds of one rotation? ";
    std::cin >> timePeriod;
    std::cout << 360 / timePeriod << std::endl;

    int timeElapsed{};
    std::cout << "seconds?";
    std::cin >> timeElapsed;
    std::cout << "Velocity " << timeElapsed * 9.8 << std::endl;

    float radius{}, pi{ 3.14f };
    std::cout << "Radius of circle?";
    std::cin >> radius;
    std::cout << "Circumference: " << pi * radius * 2 << std::endl;
    std::cout << "Area: " << pi * radius * radius << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
