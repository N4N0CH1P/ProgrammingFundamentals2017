#include <iostream>
#include <cmath>

using namespace std;

//Declare the general equation function
void generalEquation(double dA, double dB, double dC)
{
    //Declare the variables X and U
    double dX1, dX2, dU;

    //Declare U as the equation used in the square root
    dU = ( pow( dB, 2 ) ) - ( 4 * dA * dC );

    //Condition statement for U declared as a real value
    if (dU >= 0)
    {
        dX1 = (( -dB + sqrt( dU )) / (2 * dA));
        dX2 = (( -dB - sqrt( dU )) / (2 * dA));

        cout << "X1 = " << dX1 << endl;
        cout << "X2 = " << dX2 << endl;
    }
    //The "else" statement for imaginary values
    else
    {
        cout << "X1 = Imaginary Value" << endl;
        cout << "X2 = Imaginary Value" << endl;
    }
}
int main()
{
    //Declare variables
    double dNum1, dNum2, dNum3;

    //Ask for input values
    cout << "Input a: ";
    cin >> dNum1;

    cout << "Input b: ";
    cin >> dNum2;

    cout << "Input c: ";
    cin >> dNum3;

    //Run the function
    generalEquation(dNum1, dNum2, dNum3);

    return 0;
}
