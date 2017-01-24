#include <iostream>

using namespace std;

int main()
{
    //Declare the variables
    int iPesos;
    int iB500, iB200, iB100, iB50, iB20;
    int iC10, iC5, iC2, iC1;

    //Input the amount of pesos the user has
    cout << "How much money do you have? ";
    cin >> iPesos;

    //Processes for the bills

    iB500 = iPesos / 500;
    iPesos = iPesos % 500;

    iB200 = iPesos / 200;
    iPesos = iPesos % 200;

    iB100 = iPesos / 100;
    iPesos = iPesos % 100;

    iB50 = iPesos / 50;
    iPesos = iPesos % 50;

    iB20 = iPesos / 20;
    iPesos = iPesos % 20;

    iC10 = iPesos / 10;
    iPesos = iPesos % 10;

    iC5 = iPesos / 5;
    iPesos = iPesos % 5;

    iC2 = iPesos / 2;
    iPesos = iPesos % 2;

    iC1 = iPesos / 1;
    iPesos = iPesos % 1;

    //Display the results

    cout << iB500 << " Bills of 500" << endl;
    cout << iB200 << " Bills of 200" << endl;
    cout << iB100 << " Bills of 100" << endl;
    cout << iB50 << " Bills of 50" << endl;
    cout << iB20 << " Bills of 20" << endl;
    cout << iC10 << " Coins of 10" << endl;
    cout << iC5 << " Coins of 5" << endl;
    cout << iC2 << " Coins of 2" << endl;
    cout << iC1 << " Coins de 1" << endl;

    return 0;
}
