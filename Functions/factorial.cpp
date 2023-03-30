#include <iostream>
using namespace std;

long long int Return_Factorial(long long int num)
{
    long long int fact = 1;
    for (int i = num; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}


int main()
{
    int num;
    cout << "Enter the number to find it's factorial value " << endl;
    cin >> num;
    long long int value = Return_Factorial(num);
    cout << "The value of " << num << "! is " << value << endl;
    return 0;
}