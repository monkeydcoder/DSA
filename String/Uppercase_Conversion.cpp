// code for converting lowercase number into upper case number 
// Formula A - a
#include<iostream>
#include<string.h>
using namespace std;

void Uppercase_Conversion(char ch[])
{
    int size = strlen(ch);
    for(int i=0; i<size; i++)
    {
        ch[i] = ch[i] - 'a' + 'A';
    }

    for (int i = 0; i < size; i++)
    {
        cout << ch[i];
    }
    
}

int main()
{
    char ch[100];
    cout << "Enter the lower case string to convert it into upper case " << endl;
    cin.getline(ch, 100);
    Uppercase_Conversion(ch);
    
    return 0;
}
