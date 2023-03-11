#include <iostream>
using namespace std;

int main()
{
    // Printing a solid rectangle of given side 
    int side;
    cout << "Enter the number of side " << endl;
    cin >> side
    for (int row = 0; row < side; row++)
    {
        for (int col = 0; col < side; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}