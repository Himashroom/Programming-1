#include "pch.h"
#include <iostream>
#include <bitset>

int main()
{
   /* int decvar{12}, hexvar{0x12}, binvar{0b1100};
    std::cout << "Size of bool: " << decvar << " " << hexvar << " " << binvar;*/

	/*unsigned int nuMin{ };
	unsigned int nuMax{ UINT32_MAX };
	std::cout << (nuMin -1) << " unsigned int max= " <<UINT32_MAX <<" unsigned max +1= " << (nuMax + 1) << "\n";
	std::cout << "Size of short: " << sizeof(short);*/

	/*long long longNum{ INT64_MAX }, longMiNum{INT64_MIN};
	std::cout <<"long long max + 1: " << longNum + 1 << "\n";
	std::cout << "long long min - 1: " << longMiNum - 1<<"\n";
	std::cout << "long long max: " << INT64_MAX << " long long min: " << INT64_MIN << "\n";

	unsigned long long unsignedLongNum{ UINT64_MAX };
	std::cout << unsignedLongNum;*/


	//std::string binary = std::bitset<3>(-3).to_string(); //to binary
	//std::cout << binary << "\n";

	/*unsigned int num{3|5};
	std::cout << num << "\n";
	std::string binary{ std::bitset<3>(num).to_string()};
	std::cout << binary;*/
	
	/*int num{};
	std::cout << "Enter num to check which bits are set? ";
	std::cin >> num;
	std::cout << "1st bit " << (num & 1) << std::endl;
	std::cout << "2nd bit " << (num & 2) << std::endl;
	std::cout << "3rd bit " << (num & 4) << std::endl;
	std::cout << "4th bit " << (num & 8) << std::endl;

	std::cout << "Enter number to set 3rd bit ";
	std::cin >> num;
	std::cout << num << " with 3rd bit set is " << (num | 4);*/

	unsigned int num{ 2048 }, checkNum{4448};
	std::cout << num << " after shifting 1 bit to the right: " << (num >> 1) <<std::endl;
	/*checkNum = checkNum >> 1;
	std::cout << "Checknum after 1 rsh: " << checkNum << std::endl;
	std::cout << (checkNum & 128) % 127;*/

	std::cout << ((checkNum >> 8) & (256 >> 8));




}

