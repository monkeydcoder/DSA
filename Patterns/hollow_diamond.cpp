/*Objective is to print Hollow diamond pattern    
eg 
---------------
    *
   * *
  *   *
 *     *
*       *
*        * 
 *      * 
  *    * 
   *  * 
    * 
--------------
*/

#include <iostream>
using namespace std;

int main()
{
    int num_row;
    cout << "Enter the number of row's " << endl;
    cin >> num_row;
    for (int row = 0; row < num_row; row++) // row's
    {
        for (int col = 0; col < num_row - row - 1; col++)
        {
            cout << " "; //space's
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col == 0 || col == 2*row)  // first ch ==0 & last ch == 2row + 1 - 1
            {
                cout << "*"; // first charcharter and last charcharter will print *
            }
            else
            {
                cout <<" ";  // And rest will print spaces
            }
        }
        cout << endl; // new line
    }
    for (int row = 0; row < num_row; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < 2*num_row - 2*row - 1; col++) // Imp formula i.e. 2num_row - 2row - 1
        {
            if (col == 0 || col == 2*num_row -2*row -2)  // Takeing first and last charcharter i.e. 0 & (2num_row - 2row - 1) - 1
            {
                cout << "* ";   // star's
            }
            else
            {
                cout << " ";  // spaces 
            }
        }
        cout << endl;
    }
    

    return 0;
}