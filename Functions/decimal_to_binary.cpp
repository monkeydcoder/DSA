#include <iostream>
#include <cmath>
using namespace std;

int binary_converter(int num)
{
    int binarynum = 0;
    int i = 0;
    while (num > 0)
    {
        int bit = num % 2;
        binarynum = bit * pow(10, i++) + binarynum;
        // cout << bit << endl ;
        num = num / 2;
    }
    return binarynum;
}

int main()
{
    int num;
    cout << "Enter the decimal number to convert into binary " << endl;
    cin >> num;
    int binary = binary_converter(num);
    cout << binary << endl;
    return 0;
}