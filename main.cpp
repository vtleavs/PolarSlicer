/** Polar Slicer version 0.1
    @brief A programmed designed to generate g-code for a polar printer

    @author Ben Leavitt (vtleavs)
*/

#define PI 3.14159265

#include <string>
#include <iostream>
#include <fstream>

#include "Settings.h"
#include "CoordinateSystems.h"
#include "CoordinateSystems.cpp"

int settings_file()
{
    double inputdouble;
    int inputint;
    std::cout << "create/edit settings file:\n";
    std::cout << "Printer Z-Height: ";
    std::cin >> inputdouble;

}

int main()
{
    std::string inputchar;
    std::cout << "Polar Slicer version 0.1\n";
    std::cout << "\ngenerate a settings file? (y/n)\n";

    do
    {
        std::cin >> inputchar;
        if(inputchar == "y")
            settings_file();
        else if(inputchar == "n")
            std::cout << "[load current settings file]\n";
        else
            std::cout << "please type either 'y' or 'n'\n";
    }
    while(inputchar != "y" && inputchar != "n");

    PolarCoordinate polar = cartesian_to_polar(CartesianCoordinate(60, 60, 40));
    std::cout << "\n" << polar << std::endl;
    std::cout << "\n" << polar_to_cartesian(polar) << std::endl;
}
