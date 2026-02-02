#include <iostream>

/*namespaces are a collection of essentially libraries that hold specific 
variable names. They are special containers that holds groups of names
like variables, functions and classes.
General I/O functions are in the std namespace which is accessed using
std::{function}.

Operators are used to put data into the I/O stream or extract
data from it.
<< is the Insertion Operator and is used to insert data into the output
stream.
>> is the Extraction Operator and is used to extract data from the input
steam. */

int main()
{
int x;
std::cout << "input a number:" << std::endl;
std::cin >> x;
std::cout << "your number is: " << x << std::endl;
return 0;
}