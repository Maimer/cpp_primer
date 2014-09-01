#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	const string x = "X";
	cin >> word;

	for (auto &c : word)
		c = x[0];

	cout << word << endl;

	return 0;
}