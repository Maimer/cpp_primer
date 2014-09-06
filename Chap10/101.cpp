#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	int i, val;

	cout << "Please enter 10 numbers:" << endl;

	for (auto j = 0; j < 10; ++j) {
		cin >> i;
		v1.push_back(i);
	}

	cout << "Please enter a number to count: ";
	cin >> val;

	auto result = count(v1.begin(), v1.end(), val);

	cout << "The number " << val << " occurs " << result << " times." << endl;

	auto accum = accumulate(v1.begin(), v1.end(), 0);

	cout << "The total sum of the numbers entered is: " << accum << endl;

	return 0;
}