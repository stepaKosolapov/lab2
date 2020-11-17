#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, r;
    cout << "Input number: ";
    cin >> n;
    r = n % 10;
    if (n < 20)
        switch(n) 
        {
            case 10:
                cout << "desyat uchebnih zadaniy";
                break;
            case 11:
                cout << "odinnadtsat uchebnih zadaniy";
                break;
            case 12:
                cout << "dvenadtsat uchebnih zadaniy";
                break;
            case 13:
                cout << "trinadtsat uchebnih zadaniy";
                break;
            case 14:
                cout << "chetirnadtsat uchebnih zadaniy";
                break;
            case 15:
                cout << "pyatnadtsat uchebnih zadaniy";
                break;
            case 16:
                cout << "shestnadtsat uchebnih zadaniy";
                break;
            case 17:
                cout << "semnadtsat uchebnih zadaniy";
                break;
            case 18:
                cout << "vosemnadtat uchebnih zadaniy";
                break;
            case 19:
                cout << "devyatnadtsat uchebnih zadaniy";
                break;
        }
    else 
    {   
        string s;
        if(n / 10 == 2)
            s = "dvadtsat ";
        else if(n / 10 == 3)
            s = "tridtsat ";
        else 
            s = "sorok ";
        switch(r)
        {
            case 0:
                cout << s << "uchebnih zadaniy"; 
                break;
            case 1:
                cout << s << "odno uchebnoe zadanie"; 
                break;
            case 2:
                cout << s << "dva uchebnih zadaniya";
                break;
            case 3:
                cout << s << "tri uchebnih zadaniya";
                break;
            case 4:
                cout << s << "chetire uchebnih zadaniya";
                break;
            case 5:
                cout << s << "pyat uchebnih zadaniy";
                break;
            case 6:
                cout << s << "shest uchebnih zadaniy";
                break;
            case 7:
                cout << s << "sem uchebnih zadaniy";
                break;
            case 8:
                cout << s << "vosem uchebnih zadaniy";
                break;
            case 9:
                cout << s << "devyat uchebnih zadaniy";
                break;
        }
    }
    return 0;
}