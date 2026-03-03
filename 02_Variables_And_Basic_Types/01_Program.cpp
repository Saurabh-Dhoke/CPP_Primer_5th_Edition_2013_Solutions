/*-------------------------------------------------------
* Program : Sample Codes 
* Date    : 03 March 2026
--------------------------------------------------------*/

#include<iostream>

int main()
{
	std::cout << "Jay Ganesh...!" << std::endl << std::endl;

	//---------------------------------------------------------------------
	// When we assign one arithmetic type to another
	bool b = 42;                    // true
	int i = b;                      // 1
	i = 3.14;                       // 3  
	double pi = i;                  // 3.0
	unsigned char c = -1;           // on 8Bit chars : 255 / undefined
	signed char c2 = 256;           // on 8Bit chars : undefined

	std::cout << "b  = " << b << std::endl;
	std::cout << "i  = " << i << std::endl;
	std::cout << "pi = " << pi << std::endl;
	std::cout << "c  = " << c << std::endl;
	std::cout << "c2 = " << c2 << std::endl << std::endl;

	/*
	   Output : 
	  
	    b = 1
		i = 3
		pi = 3
		c =
		c2 =
	*/
	//---------------------------------------------------------------------
	
	unsigned u = 10;
	int j = -42;

	std::cout << "i + i = " << j + j << std::endl;
	std::cout << "u + i = " << u + j << std::endl << std::endl;

	/*
	  Output :
		i + i = -84
		u + i = 4294967264
	*/
	//---------------------------------------------------------------------
	
	unsigned u1 = 42, u2 = 10;
	std::cout << "u1 - u2 = " << u1 - u2 << std::endl;
	std::cout << "u2 - u1 = " << u2 - u1 << std::endl << std::endl;

	/*
	  Output : 
		u1 - u2 = 32
		u2 - u1 = 4294967264	
	*/
	//---------------------------------------------------------------------

	for (int i = 10; i >= 0; --i)
	{
		std::cout << "i = " << i << std::endl;
	}
	std::cout << std::endl;
	
	/*
	  Output :
		i = 10
		i = 9
		i = 8
		i = 7
		i = 6
		i = 5
		i = 4
		i = 3
		i = 2
		i = 1
		i = 0
	*/
	//---------------------------------------------------------------------

	// WRONG:u can never be less than 0; the condition will always succeed
	/*for (unsigned ui = 10; ui >= 0; --ui)
	{
		std::cout << " ui = " << ui << std::endl;
	}*/
	//std::cout << std::endl;
	/*
	  Output :
		 ui = 4294955769
		 ui = 4294955768
		 ui = 4294955767
		 ui = 4294955766
		 ui = 4294955765
		 ui = 4294955764
		 ui = 4294955763
		 ui = 4294955762
		 ui = 4294955761
		 .
		 .
		 .
		 infinite
	*/
	//---------------------------------------------------------------------
	
	// One way to write this loop is to use a while instead of a for.Usingawhile
	// lets us decrement before(rather than after) printing our value :
	unsigned us = 11;
	while(us > 0)
	{
		--us;
		std::cout << "us = " << us << std::endl;
	}
	std::cout << std::endl;

	/*
	  Output :
		us = 10
		us = 9
		us = 8
		us = 7
		us = 6
		us = 5
		us = 4
		us = 3
		us = 2
		us = 1
		us = 0
	*/
	//---------------------------------------------------------------------
	
	// multiline string string literal 
	std::cout << "a really , really long string literal "
			 	"that spans two lines " << std::endl << std::endl;

	/*
	  Output :
	    a really, really long string literal that spans two lines
	*/
	//---------------------------------------------------------------------

	// we can use any of the following four different ways to define an int
	// variable named units_sold and initialize it to 0:

	int units_sold_1 = 10; 
	int units_sold_2 = {20}; 
	int units_sold_3{30};
	int units_sold_4(40);

	std::cout << "units_sold_1 = " << units_sold_1 << std::endl;
	std::cout << "units_sold_2 = " << units_sold_2 << std::endl;
	std::cout << "units_sold_3 = " << units_sold_3 << std::endl;
	std::cout << "units_sold_4 = " << units_sold_4 << std::endl << std::endl;

	/*
		output : 
		    units_sold_1 = 10
			units_sold_2 = 20
			units_sold_3 = 30
			units_sold_4 = 40
	*/
	//---------------------------------------------------------------------

	return 0;
}