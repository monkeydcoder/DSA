#include <iostream>
using namespace std;

void Give_grade(int marks)
{
    switch (marks/10)
    {
        case 10:
        cout << "You have passed with A+ grade " << endl;
        break;
        case 9:
        cout << "You have passed with A grade " << endl;
        break;
        case 8:
        cout << "You have passed with B grade " << endl;
        break;
        case 7:
        cout << "You have passed with C grade " << endl;
        break;
        case 6:
        cout << "You have passed with D grade " << endl;
        break;
        default:
        cout << "You did'nt qualify " << endl;
    }
}


int main()
{
    int marks;
    cout << "Enter the marks obtained " << endl;
    cin >> marks;
    Give_grade(marks);
    return 0;
}