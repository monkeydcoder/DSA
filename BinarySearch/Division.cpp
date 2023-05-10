#include <iostream>
using namespace std;

int Division(int dividend, int divisor)
{
    int temp;
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start ) / 2;
    while (start <= end)
    {
        if(abs(mid * divisor) == abs(dividend))
        {
            temp = mid;
            break;
        }
        if(abs(mid * divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        else
        {
            temp = mid;
            start = mid + 1;
        }
        mid = start + (end - start ) / 2;
    }
    if(dividend < 0 && divisor < 0 || dividend > 0 && divisor >0)
    {
        return temp;
    }
    else
    return -temp;
}

int main()
{
    int dividend, divisor, quotent;
    cout << "Enter Divident & Divisor respectively " << endl;
    cin >> dividend >> divisor;
    quotent = Division(dividend, divisor);
    cout << "The value of quotent is " <<  quotent << endl;
    return 0;
}