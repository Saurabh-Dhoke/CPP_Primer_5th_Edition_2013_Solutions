/*--------------------------------------------------------------
* Program : Our program that adds two Sales_items should check
            whether the objects have the same ISBN. 
* Date    : 02 March 2026
----------------------------------------------------------------*/

#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;         
	
	// first check that item1 and item 2 represent the same book 
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
		return 0; // indicate success
	}
	else
	{
		std::cerr << "Data must refer to same ISBN " << std::endl;
		return -1; // indicates failure
	}
	
	return 0;
}