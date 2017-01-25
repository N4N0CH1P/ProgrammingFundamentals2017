#include <iostream>

using namespace std;

int main()
{
    //Declare the variables
    int iDay, iMonth, iYear;

    //Ask user for input values
    cout << "Type in a day of the month: ";
    cin >> iDay;
    cout << "Type in a month: ";
    cin >> iMonth;
    cout << "Type in a year: ";
    cin >> iYear;

    //Start the conditional
    //Validate the year
    if (iYear > 0)
    {
        switch (iMonth)
        {
            //Evaluate the months with 31 days
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                if (iDay >= 1 && iDay <= 31)
                {
                    cout << "Valid date";
                }
                else
                {
                    cout << "Invalid date";
                }
            }
            break;

            //Evaluate the month of February
            case 2:
            {
                if (iDay >= 1 && iDay <= 28 || iDay == 29 && iYear % 4 == 0)
                {
                    cout << "Valid date";
                }
                else
                {
                    cout << "Invalid date";
                }
            }
            break;

            //Evaluate the months with 30 days
            case 4:
            case 6:
            case 9:
            case 11:
            {
                if (iDay >= 1 && iDay <= 30)
                {
                    cout << "Valid date";
                }
                else
                {
                    cout << "Invalid date";
                }

            }
            break;

            //Default option when month is not valid
            default: cout << "Invalid date";
        }
    }
    else
    {
        cout << "Invalid date";
    }

}
