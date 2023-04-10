#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;
    // Takeing input of array 1
    int size1;
    cout << "Enter the size of array  " << endl;
    cin >> size1;
    vector<int> arr1(size1);
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }
    int key;
    cout << "Enter the key i.e. the sum to find in array in form of triplet's " << endl;
    cin >> key;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = i + 1; j < arr1.size(); j++)
        {
            for (int k = j + 1; k < arr1.size(); k++)
            {
                if (arr1[i] + arr1[j] + arr1[k] == key)
                {
                    cout << "(" << arr1[i] << ", " << arr1[j] << ", " << arr1[k] << ")";
                }
            }
        }
    }

    return 0;
}