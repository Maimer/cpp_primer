#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers;

	int x = 0;

	while (cin >> x)
		numbers.push_back(x);

	return 0;
}