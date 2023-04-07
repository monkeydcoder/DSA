// Code for doing union of 2 array assuming that there no common elements in it

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size_1, size_2;
    int arr_1[100], arr_2[100];
    cout << "Enter the size of array 1 " << endl;
    cin >> size_1;
    cout << "Enter the Unique elements of array 1 " << endl;
    for (int i = 0; i < size_1; i++)
    {
        cin >> arr_1[i];
    }
    cout << "Enter the size of array 2 " << endl;
    cin >> size_2;
    cout << "Enter the Unique elements of array 2 " << endl;
    for (int i = 0; i < size_2; i++)
    {
        cin >> arr_2[i];
    }

    vector <int> ans_arr;
    for (int i = 0; i < size_1; i++)
    {
        ans_arr.push_back(arr_1[i]);
    }
    for (int i = 0; i < size_2; i++)
    {
        ans_arr.push_back(arr_2[i]);
    }
    
    for (int i = 0; i < ans_arr.size(); i++)
    {
        cout << ans_arr[i] << " ";
    }
    
    return 0;
}