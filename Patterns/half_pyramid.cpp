#include <iostream>
using namespace std;

int main()
{
    // code for half pyramid pattern in cpp
    int num_rows;
    cout << "Enter the number of rows " << endl;
    cin >> num_rows;
    for (int row = 0; row < num_rows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}