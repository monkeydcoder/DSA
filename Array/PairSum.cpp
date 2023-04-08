#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;
    // Takeing input of array 
    int size;
    int key;
    cout << "Enter the size of array  " << endl;
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of pair sum " << endl;
    cin  >> key;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << " ";
            }
        }
           
    }
    
    return 0;
}