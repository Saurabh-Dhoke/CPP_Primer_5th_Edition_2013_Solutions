/*-------------------------------------------------------
* Program : Accept 2 Numbers from user and print its Sum
* Date    : 02 March 2026
--------------------------------------------------------*/

#include<iostream>

int main()
{
	int v1 = 0, v2 = 0;
	
	std::cout << "Enter two Numbers : " << std::endl;
	std::cin >> v1 >> v2;
	std::cout << "The Sum of : " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

	return 0;
}