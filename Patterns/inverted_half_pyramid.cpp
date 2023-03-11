#include <iostream>
using namespace std;

int main()
{
    int num_row;
    cout << "Enter the number of rows " << endl;
    cin >> num_row;
    for (int row = 0; row < num_row; row++)
    {
        for (int col = 0; col < num_row - row; col++)
        {
            cout << "* ";
        }
        cout << endl;       
    }
    
    return 0;
}