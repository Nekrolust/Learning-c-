#include <iostream>
#include <cmath>

using namespace std;

const double Vacuum_permittivity = 8.8541878128e-12;

double Formula(double q1, double q2, double eR, double R){
    double k = 1 * 4 * M_PI * Vacuum_permittivity * eR;
    double Result = k * (q1 * q2) / pow(R,2);
    
    return Result;
}

double GetCharge(string Particle){
    if (Particle == "Electron" || Particle == "E" || Particle == "e") {
        return -1.602e-19;
    } else if (Particle == "Proton" || Particle == "P" || Particle == "p") {
        return 1.602e-19;
    } else {
        double Charge;
        cout << "What is the charge of the Particle?";
        cin >> Charge;
        return Charge;
    }
}

int main(){
    //Variables
    double Vq1, Vq2, VeR, VR;
    string medium, ParticleType;
    
    // Input elementary charge for Vq1
    cout << "What is the elementary charge of q1, You can select Proton(P) or Electron(E) or Other(O)?" << endl;
    cin >> ParticleType;
    Vq1 = GetCharge(ParticleType);

    // Input elementary charge for Vq2
    cout << "What is the elementary charge of q2, You can select Proton(P) or Electron(E) or Other(O)?" <<endl ;
    cin >> ParticleType;
    Vq2 = GetCharge(ParticleType);



    // Input permittivity
    cout << "What is medium?" << endl;
    cin >> medium;
    cout << "What is the permittivity of " << medium << " ?" <<endl;
    cin >> VeR;

    // Input distance between charged Particles
    cout << "What is the distance between the charged Particles?" << endl;
    cin >> VR;

    // Callback Formula Calculation
    double Result = Formula(Vq1 , Vq2 , VeR , VR );
    cout << "The force between the charged particals is " << Result << " F in " << medium << "." <<endl;

    return 0;
}
