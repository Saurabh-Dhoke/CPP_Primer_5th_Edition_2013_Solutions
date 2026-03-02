/*-------------------------------------------------------------------
* Program : the following program reads data from the standard input 
            into a Sales_item object and writes that Sales_item back 
			onto the standard output
* Date    : 02 March 2026
---------------------------------------------------------------------*/

#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item book;

	// read ISBN number of copies sold, and sales price 
	std::cin >> book;

	// write ISBN, number of copies sold , total revenue, and average price 
	std::cout << book << std::endl;

	return 0;
}