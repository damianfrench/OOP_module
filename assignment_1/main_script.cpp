#include <iostream>
#include <tuple>
#include <cmath>
#include <limits>

namespace Bohr_atom
{
    std::tuple<int, double, double, char> taking_calculation_inputs()
    {
        int Z;
        double n_i;
        double n_j;
        char J;
        std::cout << "Enter the atomic number for your desired atom, and the initial energy levels, and J or e for an output in joules of eV, all seperated by a space (Z n_i n_f J) or each on a new line:" << std::endl;
        if (!(std::cin >> Z >> n_i >> n_j >> J))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw std::invalid_argument("Inputs must be formatted as individual values with a space or enter between each");
        }
        if (n_i<n_j){throw std::invalid_argument("initial energy level cannot be lower than the final for transitions emitting photons");}
        if (n_i==0 || n_j==0){throw std::invalid_argument("n must be greater than 0");}
        if (Z>118 || Z==0){throw std::invalid_argument("Z is not any known element");}
        if (!(std::floor(n_i)==n_i) || !(std::floor(n_j)==n_j)){throw std::invalid_argument("n must be an integer");}

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
        
        double E=13.6*(std::get<0>(inputs)*std::get<0>(inputs))*((1/(std::get<2>(inputs)*std::get<2>(inputs)))-(1/(std::get<1>(inputs)*std::get<1>(inputs))));
        if (std::get<3>(inputs)=='J')
        {
            return E*(1.6*std::pow(10,-19));
        }
        else if (std::get<3>(inputs)=='e')
        {
            return E;
        }
        else{throw std::invalid_argument("The unit type must be either J or e");}
    }

}
int main()
{
    char continuing='y';
    while (continuing=='y')
    {
        try
        {
            std::tuple<int, double, double, char> inputs=Bohr_atom::taking_calculation_inputs();
            std::cout << std::get<0>(inputs) << std::endl;
            double Energy=Bohr_atom::Bohr_calculation(inputs);
            if (std::get<3>(inputs)=='J')
            {
                std::cout << Energy << 'J' << std::endl;
            }
            else if (std::get<3>(inputs)=='e')
            {
                std::cout << Energy << "eV" << std::endl;
            } 
        } catch(std::exception& e)
        {
            std::cerr << "Exception caught: " << e.what() <<std::endl;
        }
        continuing = Bohr_atom::taking_continue_input();
    }
    return 0;
    
}