#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums;

	int num;

	while(cin >> num)
		nums.push_back(num);

	for(auto it = nums.begin(); it != (nums.end() - 1); ++it) {
		cout << *it << " + " << *(it + 1) << " = " << *it + *(it + 1) << endl;
	}

	cout << endl;

	for(decltype(nums.size()) i = 0; i != (nums.size() - 1); ++i) {
		cout << nums[i] << " + " << nums[i+1] << " = " << nums[i] + nums[i+1] << endl;
	}

	cout << endl;

	for(auto it = nums.begin(), it2 = nums.end(); it != (nums.begin() + (nums.end() - nums.begin()) / 2); ++it, --it2) {
		cout << *it << " + " << *(it2 - 1) << " = " << *it + *(it2 - 1) << endl;
	}

	cout << endl;

	for(decltype(nums.size()) i = 0; i != (nums.size() / 2); ++i) {
		cout << nums[i] << " + " << nums[nums.size() - (i + 1)] << " = " << nums[i] + nums[nums.size() - (i + 1)] << endl;
	}

	return 0;
}