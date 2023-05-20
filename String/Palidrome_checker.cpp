#include<iostream>
#include<string.h>
using namespace std;

bool Palidrone_checker(char ch[])
{
    int size = strlen(ch);
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if(ch[i] != ch[j])
        {
            return false;
        }
        else
        i++;
        j--;
    }
    return true;
}


int main()
{
    char ch[100];
    cout << "Enter the string to check wheter it is palidrone or not " << endl;
    cin.getline(ch, 100);
    if( Palidrone_checker(ch))
    {
        cout << ch << " is a palidrone " << endl; 
    }
    else
    {
        cout << ch << " is not a palidrone " << endl;
    }
    return 0;
}
