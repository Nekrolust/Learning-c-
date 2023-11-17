#include <iostream>
#include <windows.h>


using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

int main(){
    // Variables
    string Planet;
    string ObjName;
    string SelectedWeight;

    double LBS;
    double GPlanet;
    double WeightObj;
    double Mass;
    double MassObj;

    // Input Planet Name
    SetConsoleTextAttribute(h, 1);
    std::cout << "What is the name of the planet you select that is our solar system?\n";
    SetConsoleTextAttribute(h, 15);
    std::cin >> Planet;

    if (Planet == "Mars"){GPlanet = 3.71;} else if (Planet == "Earth") { GPlanet = 9.81;} else if (Planet == "Mercury") {GPlanet = 3.7;}else if (Planet == "Venus") {GPlanet = 8.87;}else if (Planet == "Jupiter") {GPlanet = 24.79;}else if (Planet == "Saturn") {GPlanet = 10.44;}else if (Planet == "Uranus"){GPlanet = 8.87;}else if (Planet == "Neptune"){Planet = 11.15;}

    // Input Obj Name
    SetConsoleTextAttribute(h, 1);
    std::cout << "What is the name of the object?\n";
    SetConsoleTextAttribute(h, 15);
    std::cin >> ObjName;

    // Input Weight Converter LBS to KG
    SetConsoleTextAttribute(h, 1);
    std::cout << "Would you like to use LBS or KG?\n";
    SetConsoleTextAttribute(h, 15);
    std::cin >> SelectedWeight;

    // Input Obj Mass
    SetConsoleTextAttribute(h, 1);
    std::cout << "What is the mass of " << ObjName << " in " << SelectedWeight << "?\n";
    SetConsoleTextAttribute(h, 15);
    std::cin >> Mass;
    if (SelectedWeight == "LBS") {MassObj = (Mass / 2.2046);}
    else if (SelectedWeight == "KG") {MassObj = Mass;}
   

    // Output Obj Weight

    WeightObj = (MassObj * GPlanet);
    SetConsoleTextAttribute(h, 1);
    std::cout << "The Weight of a " << ObjName << " on " << Planet << " is " << WeightObj << " Newtons";
    SetConsoleTextAttribute(h, 1);
}