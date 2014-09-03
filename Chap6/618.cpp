#include <iostream>

using namespace std;

void makeLower(string &s)
{
	for (decltype(s.size()) i = 0; i != s.size(); ++i) {
		s[i] = tolower(s[i]);
	}
}

int main()
{
	string s;

	while (cin >> s) {
		makeLower(s);
		cout << s << endl;
	}
	return 0;
}