#include <iostream>
using namespace std;

int main()
{
    int size;
    int arr[100];
    cout << "Enter the size of the array " << endl;
    cin >> size;
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    cout << "Printing reversed array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}