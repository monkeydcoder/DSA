#include<iostream>
#include<string.h>
using namespace std;

int getlength(char ch[])
{
    int length = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    char ch[100];
    int count = 0;
    cout << "Enter the string " << endl;
    cin.getline(ch, 100);
    cout << "Total number of char in " << ch <<" is " << getlength(ch) << endl;
    cout << strlen(ch) << endl;
    return 0;
}