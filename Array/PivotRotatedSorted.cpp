/* Finding pivot element in the given rotated and sorted array with no dublicate element's 
The pivot element is largest element in the array in this case i.e rotated and sorted array */

#include <iostream>
#include <vector>
using namespace std;

int FindPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if(start == end)
        {
            return start;
        }
        if (mid + 1 <= end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{   
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;   
    vector<int>v(size);
    cout << "Enter the element of the vector in rotated and sorted mannner with no dublicate element's " << endl
         << "example - 8,9,10,3,4,5" << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int ans = FindPivot(v);
    if (ans == -1)
    {
        cout << "Something went wrong " << endl;
    }
    else
    {
        cout << "The pivot element is at index " << ans << endl;
        cout << "The value of pivot element is " << v[ans] << endl;
    }
    return 0;
}