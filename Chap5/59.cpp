#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;

	while (cin >> ch) {
		if (ch == 'a') {
			++aCnt;
		}
		if (ch == 'e') {
			++eCnt;
		}
		if (ch == 'i') {
			++iCnt;
		}
		if (ch == 'o') {
			++oCnt;
		}
		if (ch == 'u') {
			++uCnt;
		}
	}

	cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt << endl;

	return 0;
}