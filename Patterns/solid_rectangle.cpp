#include <iostream>
using namespace std;

int main()
{
    // Printing a solid rectangle of given side 
    int num_row, num_col;
    cout  << "Enter the number of row's and column's " << endl;
    cin >> num_row >> num_col;
    for (int row = 0; row < num_row; row++)
    {
        for (int col = 0; col < num_col; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}