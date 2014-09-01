#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> text ;

	string temp;

	for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it) {
		temp = *it;
		if (temp.begin() != temp.end()) {
			auto it = temp.begin();
			*it = toupper(*it);
		}
		cout << *it << endl;
	}
}