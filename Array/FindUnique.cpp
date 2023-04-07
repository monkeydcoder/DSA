#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector <int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}


int main()
{
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;
    vector <int> arr(size);
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int UniqueElement = findUnique(arr);
    cout << "Unique element in the given array is " << UniqueElement << endl;
    return 0;
}


