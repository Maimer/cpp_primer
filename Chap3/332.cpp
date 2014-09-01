#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums(10, 0);

	int it2 = 0;

	for(auto it = nums.begin(); it != nums.end(); ++it, ++it2) {
		*it = it2;
	}

	for(auto i : nums) {
		cout << i << " ";
	}

	cout << endl;

	return 0;
}