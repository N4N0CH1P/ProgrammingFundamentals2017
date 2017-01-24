#include <iostream>

using namespace std;

int main()
{
    //Declare Variables
    int iX1, iX2, iX3;
    int iMax, iMed, iLow;

    //Ask for inputs
    cout << "Write 3 whole numbers: ";
    cin >> iX1 >> iX2 >> iX3;

    //Start the conditional statements
    //iX1 is the highest value
    if ((iX1 >= iX2 && iX1 > iX3) && (iX2 >= iX3))
    {
        iMax = iX1; //Maximum Value
        iMed = iX2; //Medium Value
        iLow = iX3; //Lowest Value

    }

    else if ((iX1 >= iX3 && iX1 > iX2) && (iX3 >= iX2))
    {
        iMax = iX1;
        iMed = iX3;
        iLow = iX2;
    }

    //iX2 is the maximum value
    else if ((iX2 >= iX1 && iX2 > iX3) && (iX1 >= iX3))
    {
        iMax = iX2;
        iMed = iX1;
        iMed = iX3;
    }

    else if ((iX2 >= iX3 && iX2 > iX1) && (iX3 >= iX1))
    {
        iMax = iX2;
        iMed = iX3;
        iLow = iX1;
    }

    //iX3 is the maximum value
    else if ((iX3 >= iX2 && iX3 > iX1) && (iX2 >= iX1))
    {
        iMax = iX3;
        iMed = iX2;
        iLow = iX1;
    }

    else if ((iX3 >= iX1 && iX3 > iX2) && (iX1 >= iX2))
    {
        iMax = iX3;
        iMed = iX1;
        iLow = iX2;
    }

    //Output the results
    cout << iMax << " , " << iMed << " , " << iLow << ".";
}
