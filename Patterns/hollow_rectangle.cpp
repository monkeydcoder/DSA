#include <iostream>
using namespace std;

int main()
{
    // Printing a hollow rectangle with a given number of rows & column
    int num_row, num_column;
    cout << "Enter the number of rows & column respectively " << endl;
    cin >> num_row >> num_column;
    for (int row = 0; row < num_row; row++)
    {
        if(row == 0 || row == num_row - 1)
        {
            for (int col = 0; col < num_column; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int col = 0; col < num_column - 2; col++)
            {
                cout << "* ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}