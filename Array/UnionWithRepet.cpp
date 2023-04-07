#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> ans;
    // Takeing input of array 1
    vector <int> output;
    int size1;
    cout << "Enter the size of array 1 " << endl;
    cin >> size1;
    vector<int>arr1(size1);
    cout << "Enter the elements of array 1" << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }

    // Takening input of array 2

    int size2;
    cout << "Enter the size of array 2 " << endl;
    cin >> size2;
    vector<int>arr2(size2);
    cout << "Enter the elements of array 2" << endl;
    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }
    
    // finding the common number i.e. intersection 

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if(arr1[i] == arr2[j])
            {
                /* Marking the found element since it is possible that same element will be there again in same array
                eg - 1,2,3,1 */
                arr2[j] = -100;
                // arr1[i] = -100;
            }
        }
        
    }

    for (int i = 0; i < arr1.size(); i++)
    {
        if (arr1[i] != -100)
        {
            output.push_back(arr1[i]);
        }
        
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        if (arr2[i] != -100)
        {
            output.push_back(arr2[i]);
        }
        
    }
    
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    

   
    return 0;
}