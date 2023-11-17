#include <iostream>
using namespace std;

int main(){

    //Variablies

    int Age;
    string Citizenship;
    string SelectedParty;

    // Input Age
    cout << "Welcome to the voting station.\nPlease input your age.\n";
    cin >> Age;

    // Input Citizenship
    cout << "Do you have a valid citizenship?\nPlease enter with\nYes(Y) or No(N)\n";
    cin >> Citizenship;

    // If statements for permissions to vote
    if ((Citizenship == "Yes" || Citizenship == "Y" || Citizenship == "y") && Age > 18 || Age == 18 ) {

        cout << "You are allowed to vote!\n";
        cout << "What party would you like to vote on?\n";
        cin >> SelectedParty;
        cout << "You have voted on " << SelectedParty << ", We thank you for doing your duty as citizen of this country.\n";

    } else if (Citizenship == "No" || Citizenship == "N" || Citizenship == "n" || Age < 18 ) {

        cout << "You are not allowed to vote!\n";
    }
}
