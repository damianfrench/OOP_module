#include <iostream>
#include <tuple>
#include <cmath>

namespace Bohr_atom
{
    std::tuple<int, double, double, char> taking_calculation_inputs()
    {
        int Z;
        double n_i;
        double n_j;
        char J;
        std::cout << "Enter the atomic number for your desired atom, and the initial energy levels, and J or e for an output in joules of eV, all seperated by a space (Z n_i n_f J):" << std::endl;
        std::cin >> Z >> n_i >> n_j >> J ;
        std::tuple<int, double, double, char> inputs;
        inputs = std::make_tuple(Z,n_i,n_j,J);
        return inputs;
    }

    char taking_continue_input()
    {
        char continuing;
        std::cout << "Do you want to repeat? (y,n)" << std::endl;
        std::cin >> continuing;
        return continuing;
    }

    double Bohr_calculation(std::tuple<int, double, double, char> inputs)
    {
        double E=13.6*(std::get<0>(inputs)*std::get<0>(inputs))*((1/(std::get<1>(inputs)*std::get<1>(inputs)))+(1/(std::get<2>(inputs)*std::get<2>(inputs))));
        if (std::get<3>(inputs)=='J')
        {
            return E*(1.6*std::pow(10,-19));
        }
        return E;
    }

}

int main()
{
    char continuing='y';
    while (continuing=='y')
    {
        std::tuple<int, double, double, char> inputs=Bohr_atom::taking_calculation_inputs();
        double Energy=Bohr_atom::Bohr_calculation(inputs);
        if (std::get<3>(inputs)=='J')
        {
            std::cout << Energy << 'J' << std::endl;
        }
        else
        {
            std::cout << Energy << "eV" << std::endl;
        }
        continuing = Bohr_atom::taking_continue_input(); 
    }
    return 0;
    
}