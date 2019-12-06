#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	int n, counter = 0;

	cin >> n;

	for (int i = 1; i < n ; i++)
	{
		if ((n-i) % i == 0)
		{
			counter++;
		}
	}
	cout << counter << endl;

	return 0;
}
