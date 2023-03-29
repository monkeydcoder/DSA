#include <iostream>
using namespace std;

void check_prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i != 0)
        {
            cout << "The given number is a prime number " << endl;
            break;
        }
        else
        cout << "The given number is not a prime number " << endl;
        break;
    }
    
}

int main()
{
    int num;
    cout << "Enter the number to check wheter it is prime or not " << endl;
    cin >> num;
    check_prime(num);
    return 0;
}