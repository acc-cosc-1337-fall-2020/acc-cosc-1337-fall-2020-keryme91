//Write the include statement for types.h here
#include "types.h"
#include <iostream>
//Write include for capturing input from keyboard and displaying output to screen



using std::cout;    using std::cin;

int main() 
{
  int n1;
cout<< "Enter a number:";//Text to display to the screen.
cin>>n1;//caputure a number from keyboard 

int n2 = 4;


  int result = multiply_numbers(n1);

cout<< "Result=" << multiply_numbers(n2);
	return 0;
}

