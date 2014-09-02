#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, temp;

	while (cin >> word && !word.empty()) {
		if (word == temp) {
			cout << word << endl;
			break;
		}
		temp = word;
	}

	return 0;
}