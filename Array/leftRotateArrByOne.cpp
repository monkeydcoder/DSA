#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector <int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int temp = arr[0];
    for (int i = 0; i < arr.size(); i++)
     {
        if(1)
        {
        arr[i] = arr[i + 1];
        }
    }
    arr[size - 1] = temp;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}