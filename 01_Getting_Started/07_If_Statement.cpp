/*-------------------------------------------------------
* Program : use an if to write a program to count how many consecutive times
            each distinct value appears in the input
* Date    : 02 March 2026
--------------------------------------------------------*/

#include<iostream>

int main()
{
	// currVal is the number we are counting , we will read new values into val 
	int currVal = 0, val = 0;

	// read first number and ensure that we have data to process 
	if (std::cin >> currVal)
	{
		int cnt = 1;                    // store the count for the current value we are processing
		while (std::cin >> val)         // read the remaining numbers
		{
			if (val == currVal)         // if the values are the same
			{
				cnt++;                  // add 1 to cnt 
			}
			else                        // otherwise print the count of previous value
			{
				std::cout << currVal << " Occurs " << cnt << " times " << std::endl;
				currVal = val;          // remember the new value 
				cnt = 1;                // reset the counter
			}
		}                               // end of while loop 
		// remember to print the count for the last value in the file 
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}   // end of if

	return 0;
}