#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1{0,1,1,2}, v2{0,1,1,2,5,8};

	for(auto i = v1.begin(), j = v2.begin(); i != v1.end() && j != v2.end(); ++i, ++j) {
		if (*i == *j) {
			cout << "Values are equal." << endl;
		}
		else {
			cout << "Values are not equal." << endl;
		}
	}

	return 0;
}