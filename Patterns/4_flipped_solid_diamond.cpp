// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int  row = 0; row < n; row++)
	{
		//star's
		for (int star = 0; star < n - row; star++)
		{
			cout << "*";
		}
		
		// space's
		for (int space = 0; space < 2 * row; space++)
		{
			cout << " ";
		}
		// star's
		for (int star = 0; star < n - row; star++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	for (int row = 0; row < n; row++)
	{
		// star's
		for (int star = 0; star < row + 1; star++)
		{
			cout << "*";
		}
		//space's
		for (int space = 0; space < 2 * n - 2*row - 2; space++)
		{
			cout << " ";
		}
		// star's
		for (int star = 0; star < row + 1; star++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}