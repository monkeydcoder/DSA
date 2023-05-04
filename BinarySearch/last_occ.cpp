// Code for finding Last occurence 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LastOcc(vector<int> arr, int target) 
{
    int lastocc = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start ) /2;
    while (start <= end)
    {
        if(arr[mid] == target)
        {
            lastocc = mid;
            start = mid + 1;
        }
        if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start )/2;
    }
    return lastocc;
}

int main()
{
    int size, target; 
    cout << "Enter the size of array " << endl;
    cin >> size;
    vector <int> arr(size);
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element You wish to find Last occcurence " << endl;
    cin >> target;
    int ans = LastOcc(arr, target);
    cout << "Last occurence of " << target << " is at " << ans << endl;
    return 0;
}