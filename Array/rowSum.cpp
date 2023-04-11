// C++ program to find the sum of row in 2d array
#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int size;
    int sum = 0;
    cout << "Enter the size of square array" << endl;
    cin >> size;
    cout << "Enter the elements in square array " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "The sum of " << i + 1 <<"th row is " << sum <<endl;
        sum = 0;
    }
    
    return 0;
}