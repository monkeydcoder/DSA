/* Finding the index of given target element in the nearly sorted array
Nearly sorted means : any ith element can be on (i-1)th , ith (i+1)th position in the given array */

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start ) / 2;
    while (start <= end)
    {
        if(arr[mid] == target)
        {
            return mid;
            // If target is exactly at mid
        }
        if(mid - 1 >= start && arr[mid - 1] == target)
        {
            return mid - 1;
            // since it is nearly sorted array it can be at (mid - 1)th position 
        }
        if(mid + 1 <= end && arr[mid + 1] == target)
        {
            return mid + 1;
            // Again it can be at (mid + 1)th position bcox of nearly sorted array
        }
        if(arr[mid] > target)
        {
            // Left search
            end = mid - 2;
            // +2 because we have checked +1 position earler in above 3 if cases.
        }
        else
        {
            // Right search
            start = mid + 2;
            // +2 because we have checked +1 position earler in above 3 if cases.
        }
        mid = start + (end - start ) / 2;
    }
    return -1;
}

int main()
{
    int size = 0;
    int target;
    cout << "Enter the size of array " << endl;
    cin >> size;
    vector <int> arr(size);
    cout << "Enter the element's of array " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target element you wish to find " << endl;
    cin >> target;
    int ans = BinarySearch(arr, target);
    cout << "Target found at " << ans << endl;
    return 0;
}