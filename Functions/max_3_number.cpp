#include <iostream>
using namespace std;

int Max_3_num()
{
    int a, b,c;
    cout << "Enter the 3 number's for it's maximum value " << endl;
    cin >> a >> b >> c;

    if (a>b && a>c)
    {
        cout << "Maximum is " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "Maximum is " << b << endl;
    }
    else
        cout << "Maximum is " << c << endl;
}

int main()
{
    Max_3_num();
    return 0;
}