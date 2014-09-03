#include <iostream>
#include <string>

using namespace std;

string make_plural(const string &word, const string &ending)
{
	return word + ending;
}

string make_plural(const string &word, const string &ending = "s");

int main()
{
	string i;

	while (cin >> i) {
		string plural = make_plural(i);
		cout << plural << endl;
	}
	return 0;
}