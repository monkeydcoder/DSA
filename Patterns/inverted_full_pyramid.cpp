/*Objective is to write a code to print a inverted full pyramid 
eg 
--------------------
* * * * * * * * * * 
 * * * * * * * * * 
  * * * * * * * * 
   * * * * * * *
    * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
-----------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int num_row;
    cout << "Enter the number of rows " << endl;
    cin >> num_row;
    for (int row = 0; row < num_row; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";          //For spaces to be printed
        }
        for (int col = 0; col < num_row - row; col++)
        {
            cout << "* ";         //For * to be printed 
        }
            cout << endl;        
    }
    
    return 0;
}