#include <iostream>

using namespace std;

int main()
{
    //Declare the variables
    char cOption;
    double dArea, dBase, dHeight, dRadius;

    //Ask for the input variable
    cout << "Choose the character for a shape: ";
    cout << "circle (C) , square (S), or tiangle (T): ";
    cin >> cOption;

    //Start the switch depending on the option
    switch (cOption)
    {
        //Case for the circle
        case 'c':
        case 'C':
        {
            //Ask for the radius
            cout << "Type the radius of the circle: ";
            cin >> dRadius;

            //Process the equation
            dArea = 3.1416 * dRadius * dRadius;

            //Display area
            cout << "The area is: " << dArea;
        }
        break;

        //Case for the square
        case 's':
        case 'S':
        {
            //Ask for the base or the height of the square
            cout << "Type in the base or height of the square: ";
            cin >> dBase;

            //Process the equation
            dArea = dBase * dBase;

            //Display area
            cout << "The area is: " << dArea;
        }
        break;

        //Case for a triangle
        case 't':
        case 'T':
        {
            //Ask for the base and height of the triangle
            cout << "Type in the base of the triangle: ";
            cin >> dBase;

            cout << "Type in the height of the triangle: ";
            cin >> dHeight;

            //Process the area of the triangle
            dArea = dBase * dHeight / 2.0;

            //Display area
            cout << "The area is: " << dArea;
        }
        break;

        //Default case
        default: cout << "Invalid option";
    }
}
