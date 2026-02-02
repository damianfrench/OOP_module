#include <iostream>

namespace Group1
{
    void adding_numbers()
    {
        int x;
        int y;
        std::cout <<"Adding Numbers" << std::endl;
        std::cout <<"Input a number:" << std::endl;
        std::cin >> x;
        std::cout <<"Input a second number" << std::endl;
        std::cin >> y;
        std::cout <<"Sum of the numbers: "<< x+y <<std::endl;
    }
    void subtracting_numbers()
    {
        int x;
        int y;
        std::cout <<"Subtracting Numbers" << std::endl;
        std::cout <<"Input a number:" << std::endl;
        std::cin >> x;
        std::cout <<"Input a second number" << std::endl;
        std::cin >> y;
        std::cout <<"Difference in the numbers: " << x-y <<std::endl;
    }
}

namespace Group2
{
    void multiplying_numbers()
    {
        int x;
        int y;
        std::cout <<"Multiplying Numbers" << std::endl;
        std::cout <<"Input a number:" << std::endl;
        std::cin >> x;
        std::cout <<"Input a second number" << std::endl;
        std::cin >> y;
        std::cout <<"Product of the numbers: "<< x*y <<std::endl;
    }
    void dividing_numbers()
    {
        int x;
        int y;
        std::cout <<"Dividing Numbers" << std::endl;
        std::cout <<"Input a number:" << std::endl;
        std::cin >> x;
        std::cout <<"Input a second number" << std::endl;
        std::cin >> y;
        std::cout <<"Divided numbers: "<< x/y <<std::endl;
    }
}

int main()
{
    Group1::adding_numbers();
    Group2::multiplying_numbers();
    Group1::subtracting_numbers();
    Group2::dividing_numbers();
}