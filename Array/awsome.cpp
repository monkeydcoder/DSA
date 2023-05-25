#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> ans;
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
    for (int i = 0; i < arr1.size(); i++)
    {
        if (arr1[i] == 0)
        {
            ans.push_back(arr1[i]);
        }
        
    }
    for (int j = 0; j < arr1.size(); j++)
    {
        if (arr1[j] == 1)
        {
            ans.push_back(arr1[j]);
        }
        
    }
    
    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }
    return 0;
}