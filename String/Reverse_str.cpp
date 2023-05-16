/* Reverseing the string using 2 pointer approach 
NOTE - Array is passed by value so change in function reflect's in original array */

#include<iostream>
#include<string.h>
using namespace std;

void Reverse_String(char ch[])
{
    int size = strlen(ch);
    int i = 0;
    int j = size - 1;
    while(i<=j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{
    char ch[100];
    cout << "Enter the string " << endl;
    cin.getline(ch, 100);
    cout << "String before reversal " << ch << endl;
    Reverse_String(ch);
    cout << "String after reversal " << ch << endl;
    return 0;
}


// METHOD - 2
// #include<iostream>
// #include<string.h>
// using namespace std;

// void getlength(char ch[])
// {
//     int length = 0;
//     int i = 0;
//     while (ch[i] != '\0')
//     {
//         length++;
//         i++;
//     }
//     for(int i = length - 1; i >= 0; i--)
//     {
//         cout << ch[i];
//     }
// }

// int main()
// {
//     char ch[100];
//     int count = 0;
//     cout << "Enter the string " << endl;
//     cin.getline(ch, 100);
//     // cout << "Total number of char in " << ch <<" is " << getlength(ch) << endl;
//     cout << strlen(ch) << endl;
//     getlength(ch);
//     return 0;
// }