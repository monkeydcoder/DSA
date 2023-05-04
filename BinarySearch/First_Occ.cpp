// Code for finding first occurence 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FirstOcc(vector<int> arr, int target) 
{
    int firstocc = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start ) /2;
    while (start <= end)
    {
        if(arr[mid] == target)
        {
            firstocc = mid;
            end = mid - 1;
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
    return firstocc;
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
    cout << "Enter the element You wish to find first occcurence " << endl;
    cin >> target;
    int ans = FirstOcc(arr, target);
    cout << "First occurence of " << target << " is at " << ans << endl;
    return 0;
}