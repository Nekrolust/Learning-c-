#include <iostream>

int main(){

    //Variables
    double C = 0;
    double F = 0;

    //Input + text
    std::cout << "Welcome to my new Celsius to Fahrenheit Convert.\nWhat is the Tempature in Celsius?\n";
    std::cin >> C;

    //Calculations
    F = (C * 9/5) + 32;

    //Output
    std::cout << "The tempature is " << F << " in Fahrenheit.";

}