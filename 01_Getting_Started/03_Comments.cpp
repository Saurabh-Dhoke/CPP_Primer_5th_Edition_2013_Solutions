/*-------------------------------------------------------
* Program : Accept 2 Numbers from user and print its Sum
            Single and Multi Line Comments

* Date    : 02 March 2026
--------------------------------------------------------*/

#include<iostream>

/*
  Simple Main Function 
  Read two Numbers and write their Sum
*/
int main()
{
	// prompt user to enter two numbers 
	int v1 = 0, v2 = 0; 
	
	std::cout << "Enter two Numbers : " << std::endl; // variables to hold the input we read
	std::cin >> v1 >> v2;                             // read input
	std::cout << "The Sum of : " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

	return 0;
}