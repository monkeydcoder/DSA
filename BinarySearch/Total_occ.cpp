// Code for finding total number of occurrence in ascending integer array 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LastOcc(vector<int> arr, int target) 
{
    // Code for finding Last occurence 
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

int FirstOcc(vector<int> arr, int target) 
{
    // Code for finding first occurence 
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
    cout << "Enter the element which you wish to find it's occurrence " << endl;
    cin >> target;
    int ans_1 = FirstOcc(arr, target);
    int ans_2 = LastOcc(arr, target);
    cout << "Total number of occurrence of " << target << " is " << ans_2 - ans_1 + 1 << endl; 
    return 0;
}