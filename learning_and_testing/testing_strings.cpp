// using strings as arrays

#include <iostream>
#include <cstring>
#include <string>


void strings_as_arrays()
{

    char test_string[10];
    std::cout << "enter a string" << std::endl;
    std::cin >> test_string;
    for (int i=0; i<=strlen(test_string);i++)
    {
        std::cout << test_string[i] << std::endl;
    }

}

// using strings the c++ way

void strings_c_way()
{
    std::cout << "enter a string" << std::endl;
    std::string test_string;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin,test_string);
    for (int i=0; i<=test_string.length();i++)
    {
        std::cout << test_string[i] << std::endl;
    }
    test_string.erase(test_string.begin()+2,test_string.end()-2);
    std::cout << test_string << std::endl;

}


int main()
{
    strings_as_arrays();
    strings_c_way();
    return 0;
}