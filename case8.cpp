#include <iostream>
using namespace std;

int main()
{
    int m, d;
    cout << "Input day and month: ";
    cin >> d >> m;
    switch(m) 
    {
        case 5:
        case 7:
        case 10:
        case 12:
            if(d == 1){d = 30; m--;}
            else d--;
            cout << "Day:" << d << " Month:" << m;
            break;
        case 1:
            if(d == 1) m = 13;
        case 2:
        case 4:
        case 6:
        case 8:
        case 9:
        case 11:
            if(d == 1){d = 31; m--;}
            else d--;
            cout << "Day:" << d << " Month:" << m;
            break;
        case 3:
            if(d == 1){d = 28; m--;}
            else d--;
            cout << "Day:" << d << " Month:" << m;
            break;
    }
    return 0;
}