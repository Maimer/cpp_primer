#include <iostream>
#include <string>

using namespace std;

int main()
{
	string rsp;
	do {
		cout << "Please enter two strings: ";
		string s1, s2;
		cin >> s1 >> s2;
		if (s1 > s2) {
			cout << s1 << " is greater than " << s2;
		}
		else if (s2 > s1) {
			cout << s2 << " is greater than " << s1;
		}
		else {
			cout << s1 << " is equal to " << s2;
		}
		cout << endl << "More? Enter yes or no: ";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');

	return 0;
}