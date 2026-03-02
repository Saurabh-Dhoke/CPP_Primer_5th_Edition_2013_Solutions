/*--------------------------------------------------------------
* Program :  We need to read a file of sales transactions and
			 produce a report that shows, for each book, the total
			 number of copies sold, the total revenue, and the
			 average sales price.
* Date    : 02 March 2026
----------------------------------------------------------------*/

#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item total;                            // variable to hold data for the next transaction
	
	if(std::cin >> total)                        // read the first transaction and ensure that there are data to process
	{
		Sales_item trans;                        // variable to hold the runnning sum 
		
		while (std::cin >> trans)                // read and process the remaining transactions 
		{
			if (total.isbn() == trans.isbn())    // if we are still processing the same book
			{
				total = total + trans;           // update the running total
			}
			else
			{
				std::cout << total << std::endl; // print results for the previous book
				total = trans;                   // total now refers to the next book
			}
		}
		std::cout << total << std::endl;         // print the last transaction
	}
	else
	{
		std::cerr << "No Data ? " << std::endl;  // no input warn the user
		return -1;                               // indicates failure
	}
	
	return 0;
}