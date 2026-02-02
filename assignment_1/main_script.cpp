#include <iostream>

namespace Bohr_atom
{
    int atomic_num_input()
    {
        int Z;
        std::cout << "Enter the atomic number for your desired atom:" << std::endl;
        std::cin >> Z;
        return Z;
    }
    
    int principle_qn()
    {
        int n;
        std::cin >> n;
        return n;
    }
}

int main()
{
    std::cout << "Enter the principle Quantum Number for the initial electron energy state" << std::endl;
    int n_i = Bohr_atom::principle_qn();
    std::cout << "Enter the principle Quantum Number for the final electron energy state" << std::endl;
    int n_j = Bohr_atom::principle_qn();
    int Z = Bohr_atom::atomic_num_input();
    return 0;
}