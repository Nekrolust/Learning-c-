#include <iostream>

using namespace std;

int main() {
    // Variables declaration
    int n;
    double term1 = 0;
    double term2 = 1;

    //Input parameters of user
    cout << "Give a digital number for the Fibonacci Sequence: ";
    cin >> n;

    //Checks if the number is greater than 0
    do {
        if (n <= 0) {
            cout << "Please enter a Positive number: ";
            cin >> n;
        }
    } while (n <= 0);
    
    //Calculates the fibonacci number
    for (int i = 0; i < n; ++i) {

        double NewTerm = term1 + term2;
        term1 = term2;
        term2 = NewTerm;

        //Prints out the fibonacci number when i > n - 1
        if (i == n - 1) {
            cout << NewTerm << endl;
            return 0;
        }
    }

    return 0;
}