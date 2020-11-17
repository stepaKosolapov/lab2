#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Input x: ";
    cin >> x;
    cout << "f(" << x << ") = ";
    if (x > 2 or x < -2)
        x = x*2;
    else 
        x = x*-3;
    cout << x;
    return 0;
}