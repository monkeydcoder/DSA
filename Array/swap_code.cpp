/*Write code for swap function there are three way to write the same 
1.Using temporary variable 
*/

#include <iostream>
using namespace std;

void swaping(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    cout << "Numbers after swaping are " << a << " & " << b << endl;
}


int main()
{
    int num1, num2;
    cout << "Enter 2 number to swap them " << endl;
    cin >> num1 >> num2;
    swaping(num1, num2);
    return 0;
}

// Using arthematic operator ( + , -)

// #include <iostream>
// using namespace std;

// void swap(int a, int b)
// {
    
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter 2 number to swap them " << endl;
//     cin >> num1 >> num2;
//     swap(num1, num2);
//     return 0;
// }

