#include <iostream>

using namespace std;

int fact(int val)
{
	int fac = 1;

	while (val > 1) {
		fac *= val--;
	}
	return fac;
}

int main()
{
	int i, j;

	while (cin >> i) {
		if (i != 0) {
			j = i;
			i = fact(i);
			cout << "The factorial of " << j << " equals " << i << endl;
		}
		else {
			break;
		}
	}
	return 0;
}