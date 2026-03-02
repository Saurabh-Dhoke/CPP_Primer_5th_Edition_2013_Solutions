/*-------------------------------------------------------
* Program : write a program to sum the numbers from 1 to 10 
           
* Date    : 02 March 2026
--------------------------------------------------------*/

#include<iostream>

int main()
{
	int sum = 0 ; 
	
	// sum values from 1 to 10
	for(int val = 1; val <= 10; val++)
	{
		sum = sum + val;  // assigns sum + val to sum 
	}

	std::cout<< "Sum of 1 to 10 inclusive is : "<< sum << std::endl;
	return 0;
}