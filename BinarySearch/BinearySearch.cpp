// Code for Bineary Search 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            cout << "Target found at " << mid + 1 << "th position " << endl;
        }
        if (arr[mid] > target)
        {
            // Search in left 
            end = mid - 1;
        }
        else
        {
            // Search in right 
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int size, target;
    cout << "Enter the size of array " << endl;
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the value's of array in an asceding order " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search " << endl;
    cin >> target;
    BinarySearch(arr, target);
    return 0;
}