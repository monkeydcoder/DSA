// Code for bubble sort it's time complexity is O(n^2) and space complexity is O(1)

#include<iostream>
#include<vector>
using namespace std;

void Bubble_Sort(vector<int>arr)
{
    int start = 0;
    int end = arr.size() - 1;
    for(int round = 1; round <arr.size(); round++)
    {
        bool swapped = false;
        for(int j = round + 1; j < arr.size() - round; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(swapped == false)
        {
            break;
        }
    }

    for(int i=0; i < arr.size(); i++)
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
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Bubble_Sort(arr);
    return 0;
}
