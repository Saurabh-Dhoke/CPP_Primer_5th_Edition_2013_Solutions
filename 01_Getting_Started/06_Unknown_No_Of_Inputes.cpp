/*-------------------------------------------------------
* Program : Read unknown no of inputs and calculate running
            total of that numbers  
            read until end of file (^z)
* Date    : 02 March 2026
--------------------------------------------------------*/

#include<iostream>

int main()
{
	int sum = 0 , val = 0; 
	
	// read until end of file , calculating running total of all values
	while(std::cin >> val)
	{
		sum = sum + val;  // assigns sum + val to sum 
	}

	std::cout<< "Sum is : "<< sum << std::endl;
	return 0;
}