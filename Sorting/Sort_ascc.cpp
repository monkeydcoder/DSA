#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Hello world.\n";
    cout<<"Enter the size of array.\n";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    for(int j=0;j<n;j++)
    {
        bool swapped=false;
    for (int i = 0; i < n; i++)
    { 
        if (arr[i]>arr[i+1])
        {
            x=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=x;
            swapped=true;

        }
    }
    if(!swapped){
        break;
    }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}