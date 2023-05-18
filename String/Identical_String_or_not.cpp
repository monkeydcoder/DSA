// code for checking if given two strings are equall or not 

#include<iostream>
#include<string.h>
using namespace std;

bool Compare_string(string a, string b)
{
    if(a.length() != b.length())
    {
        return false;
    }
    for(int i=0; i<a.length(); i++)
    {
        
        if(a[i] != a[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a, b;
    cout << "Enter the first string " << endl;
    getline(cin, a);
    cout << "Enter the second string " << endl;
    getline(cin, b);
    if(Compare_string(a,b))
    {
        cout << "Both the string are exactly identical " << endl;
    }
    else
    {
        cout << "The given string are not identical " << endl;
    }
    return 0;
}
