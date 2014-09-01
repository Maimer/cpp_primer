#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word1, word2;

	cin >> word1 >> word2;

	string sentence = word1 + " " + word2;

	cout << sentence << endl;

	return 0;
}