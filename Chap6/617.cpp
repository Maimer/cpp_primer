#include <iostream>

using namespace std;

bool hasCaps(const string &s)
{
	for (decltype(s.size()) i = 0; i != s.size(); i++) {
		if (isupper(s[i])) {
			return true;
		}	
	}
	return false;
}

int main()
{
	string s;

	while (cin >> s) {
		if (hasCaps(s)) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}
	}
	return 0;
}