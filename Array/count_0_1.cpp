#include <iostream>
using namespace std;

int main()
{
    int size;
    int count_1 = 0, count_0 = 0;
    int arr[100];
    cout << "Enter the size of array " << endl;
    cin >> size;
    cout << "Enter the array full of 0's and 1's " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count_1++;
        }
        else if (arr[i] == 0)
        {
            count_0++;
        }
    }
    cout << "Number of 1's & 0's in the given array is " << count_1 << " &" << " " << count_0 << " respectively " << endl;
    return 0;
}