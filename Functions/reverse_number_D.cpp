// Method #1

#include <iostream>
using namespace std;
int main()
{
    int n, reverse = 0, rem;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    cout << "Reversed Number: " << reverse << endl;
    return 0;
}

//  Method #2

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num,a;
//     cout << "Enter the number for it's reverse value.\n";
//     cin >> num;
//     while (num > 0)
//     {
//         a=num%10;
//         cout <<a;
//         num = num/10;
//     }
    
//     return 0;
// }