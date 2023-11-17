#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
#include <iostream>

using namespace std;



int main(){
    // Array's
    string Planets[8] = {"Mecury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    double GravitiesOfPlanets[8] = {3.7, 8.87, 9.81, 3.71, 24.79, 10.44, 8.87, 11.15};
    
    // Variables
    string ObjName;
    double ObjMass;
    double ObjWeight;
    string SelectedPlanet;

    // Input ObjName
    system("Color 01");
    std::cout << "Welcome to my weight calculator that works on all planets in the solar system.\nWhat is the name of your object?\n";
    system("Color 0F");
    std::cin >> ObjName;

    // Input Planet

    system("Color 01");
    std::cout << "What is the planet of which you want to select?\n";
    std::cin >> SelectedPlanet;
    
}