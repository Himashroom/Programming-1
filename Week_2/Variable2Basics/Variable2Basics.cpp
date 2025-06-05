#include "pch.h"
#include <iostream>
#include <string>

int DemonstrateModulo(int num);
void GenerateRandom(int randNum);
void TypeCast();
void ExploreStrings();

int main()
{
    int num{};
   
    //std::cout << "Enter a number: ";
    //std::cin >> num;
    //std::cout << DemonstrateModulo(num);
    srand(int(time(nullptr)));
    /*for (int i{}; i <= 50; ++i)
    {
        GenerateRandom(rand());
        
    }*/
    
    //TypeCast();
    ExploreStrings();
}

int DemonstrateModulo(int num)
{
    return num % 2;
}

void GenerateRandom(int randNum)
{
   std::cout << (rand() % 1001 - 500.0f) / 100.0f << std::endl;
}

void TypeCast()
{
    char userInput{}, randLetter{};

    /*std::cout << "Letter? ";
   std::cin >> userInput;

    std::cout << "Letter: " << userInput << ", ASCII value: " << int(userInput) << std::endl;*/

    
    for (int i{}; i <= 50; ++i)
    {
        randLetter = (rand() % (int('z') - int('a') + 1)) + int('a');
        std::cout << "Random letter " << randLetter << ", ASCII value: " << int(randLetter) << std::endl;

    }    
    
}

void ExploreStrings()
{
    std::string testString{ "Ik ben een string" }, userInp{};
    std::cout << testString <<std::endl;
    testString = "Ik ben een nu string";
    std::cout << testString << std::endl;
    
    /*testString += std::to_string( 5);
    std::cout << testString;
*/
    /*std::cout << "Enter a string: " << std::endl;
    std::cin >> userInp;
    std::cout << testString + " " + userInp;*/

    std::string intString{ "5" }, floatString{ "4.32" };
    std::cout << intString + floatString <<std::endl;
    std::cout << std::stoi(intString) + std::stof(floatString);

  


}

