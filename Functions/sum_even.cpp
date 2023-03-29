#include <iostream>
using namespace std;

int sum_even(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i = i+ 2)
    {
        sum = sum + i;
    }
    return sum;
}


int main()
{
    int num;
    cout << "Enter the Number " << endl;
    cin >> num;
    int total = sum_even(num);
    cout << "The sum of the even number till " << num << " is " << total << endl;
    return 0;
}