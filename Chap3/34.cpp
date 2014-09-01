#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word1, word2;

	cin >> word1 >> word2;

	if (word1 == word2){
		cout << word1 << " is equal to " << word2 << endl;
	}
	else {
		if (word1 > word2)
			cout << word1 << " is greater than " << word2 << endl;
		else
			cout << word2 << " is greater than " << word1 << endl;
		}
	return 0;
}