#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, temp;

	while (cin >> word && !word.empty()) {
		if (word[0] != toupper(word[0])) {
			temp = word;
			continue;
		}
		if (word == temp) {
			cout << word << endl;
			break;
		}
		temp = word;
	}
	return 0;
}