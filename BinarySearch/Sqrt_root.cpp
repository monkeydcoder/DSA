// Finding the numeric value of square root using binary search i.e. in complexity of O(log n)

#include <iostream>
#include <vector>
using namespace std;

int square_root(int n)
{
    int temp;
    int start = 0;
    int end = n;
    int mid = start + (end - start ) / 2;
    while(start <= end)
    {
        if(mid * mid == n)
        {
            return mid;
        }
        if(mid * mid > n)
        {
            end = mid - 1;
        }
        else if(mid * mid < n)
        {
            temp = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return temp;
}

int main()
{
    int num;
    cout << "Enter the number to find the square root, numeric value " << endl;
    cin >> num;
    int ans = square_root(num);
    cout << "The numeric value of sqrt of " << num << " is " << ans << endl;
    return 0;
}