#include <iostream>

using namespace std;

int main()
{
	string word, high, temp;
	unsigned count = 0, max = 1;

	while (cin >> word) {
		if (word == temp) {
			++count;
			if (count >= max) {
				high = word;
				max = count;
			}
		}
		else {
			temp = word;
			count = 1;
		}
	}

	cout << high << " occurred " << max << " times." << endl;

	return 0;
}