#include<iostream>
#include<string.h>
using namespace std;

void Replace(char ch[])
{
    int size = strlen(ch);
    for (int i = 0; i < size; i++)
    {
        if (ch[i] == ' ')
        {
            ch[i] = '@';
        }
    }
}

int main()
{
    char ch[100];
    cout << "Enter the string " << endl;
    cin.getline(ch, 100);
    cout << "Before performing operation " << ch << endl;
    Replace(ch);
    cout << "After performing operation " << ch << endl;
    return 0;
}
