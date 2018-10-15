/**
*@ChanceKalugyer
*@Date Oct 2018
*@Version 1.0
*@Purpose To determine the age of the user
*/

#include <iostream>

using namespace std;

int main()
{
    int bYear = 0;
    int cYear = 0;
    cout << "Enter your year of birth: ";
    cin >> bYear;
    cout << "Enter the current year: ";
    cin >> cYear;
    cout << "You are: " << + (cYear - bYear) << + " years old.";

        return 0;
}
