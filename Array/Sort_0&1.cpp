#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Takeing input of array
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = arr.size() - 1;
    int a = 0;

    while (a != end)
    {
        if (arr[a] == 0)
        {
            // Swap from left  i.e. from start
            swap(arr[start], arr[a]);
            a++;
            start++;
        }
        else if (arr[a] == 1)
        {
            // Swap from right i.e. from end
            swap(arr[a], arr[end]);
            end--;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
