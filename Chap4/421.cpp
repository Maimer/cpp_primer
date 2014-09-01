#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1{1,2,3,4,5,6,7,8,9,10};

	for(auto &i : v1) {
		i = ((i % 2 != 0) ? (i * 2) : (i));
	}

	for(auto i : v1) {
		cout << i << " ";
	}

	cout << endl;

	return 0;
}