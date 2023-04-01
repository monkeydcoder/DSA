#include<iostream>
using namespace std;

int main()
{
    int size, key;
    int arr[100];
    cout << "Enter the size of the array " << endl;
    cin >> size;
    Get_array(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }  
    cout << "Enter the key to search in the given array " << endl;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at position " << i << endl;
        }
        else
        cout << "Key not present " << endl;
    }
    return 0;
}