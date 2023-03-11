 /*Objective is to print solid diamond pattern
 eg
 -----------
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
----------
*/
#include <iostream>
using namespace std;

int main()
{
    int num_row;
    cout << "Enter the number of row's " << endl;
    cin >> num_row;
    for (int row = 0; row < num_row; row++)
    {
        for (int col = 0; col < num_row - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    for (int row = 0; row < num_row; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < num_row - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    

    return 0;
}