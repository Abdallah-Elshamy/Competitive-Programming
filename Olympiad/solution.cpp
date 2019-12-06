#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int n, input, counter = 0;
	vector <int> v,last;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	for (int k = 0; k < v.size(); k++)
	{
		if (count(last.begin(), last.end(), v[k]) == 0 && v[k] != 0) {
			last.push_back(v[k]);
		}
	}

	cout << last.size() << endl;

	return 0;
}
