#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Input year: ";
    cin >> year;
    if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0)
        cout << "There are 366 days in this year";
    else 
        cout << "There are 365 days in this year";
    return 0;
}