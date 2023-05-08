#include <iostream>
#include <vector>
using namespace std;

void Selection_Sort(vector<int>arr)
{
    for(int i=0; i<arr.size() - 1; i++)
    {
        // Outer loop for for n - 1 rounds
        int minIndex = i;
        for(int j = i + 1; j < arr.size(); j++)
        {
            // Finding minimum  
            if(arr[j] < arr[minIndex])
            {
                // New minimum then store it
                minIndex = j;
            }
        }
        // Swaping it with minimum and ith index
        swap(arr[i], arr[minIndex]);
    }
    // Printing the sorted array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
}   

int main()
{
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;
    vector<int>arr(size);
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Selection_Sort(arr);
    
    return 0;
}