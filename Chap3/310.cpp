#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line;

	const string blank = " ";

	getline(cin, line);

	for(auto &c : line)
		if (ispunct(c))
			c = blank[0];

	cout << line << endl;

	return 0;
}