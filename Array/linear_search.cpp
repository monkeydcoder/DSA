#include <iostream>
using namespace std;

bool Linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size, key;
    int arr[100];
    cout << "Enter the size of array " << endl;
    cin >> size;
    cout << "Enter the element of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to find in array " << endl;
    cin >> key;
    if (Linear_search(arr, size, key))
    {
        cout << "Found" << endl;
    }
    else
        cout << "Not found " << endl;
    return 0;
}