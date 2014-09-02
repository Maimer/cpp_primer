#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	float num1, num2;
	float ans;

	while (cin >> num1 >> num2) {
		try {
			ans = num1 / num2;
			cout << num1 << " divided by " << num2 << " equals " << ans << endl;
		} catch (logic_error err) {
			cout << err.what() << "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n') {
				break;
			}
		}
	}
	return 0;
}