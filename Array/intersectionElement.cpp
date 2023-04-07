#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> ans;
    // Takeing input of array 1

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
                arr2[j] = -1;
                ans.push_back(arr1[i]);
            }
        }
        
    }

    // Printing the intersection elements 
    cout << "Intersection in both the array's are as follow " << endl; 
    for (int i = 0; i < ans.size(); i++)
    {
        cout <<  ans[i] << " " ;
    }
    return 0;
}