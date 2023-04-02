#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;
    cout << "Enter the element's of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] <<" ";
        }
        else
        {
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        }
        start++;
        end--;
    }
    return 0;
}