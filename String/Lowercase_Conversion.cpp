// code for converting uppercase number into lower case number 
// Formula a - A
#include<iostream>
#include<string.h>
using namespace std;

void Lowercase_Conversion(char ch[])
{
    int size = strlen(ch);
    for(int i=0; i<size; i++)
    {
        ch[i] = ch[i] + 'a' - 'A';
    }

    for (int i = 0; i < size; i++)
    {
        cout << ch[i];
    }
    
}

int main()
{
    char ch[100];
    cout << "Enter the upper case string to convert it into lower case " << endl;
    cin.getline(ch, 100);
    Lowercase_Conversion(ch);
    
    return 0;
}
