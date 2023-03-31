/*
Code for printing solid half diamond pattern 
--------------------
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
--------------------
*/


#include <iostream>
using namespace std;

void print(int num)
{
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < num; row++)
    {
        for (int col = 1; col < num - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    
}


int main()
{
    int num;
    cout << "Enter any number " << endl;
    cin >> num;
    print(num);
    return 0;
}