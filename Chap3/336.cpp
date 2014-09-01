#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr1[5] = {1,2,3,4,5}, arr2[5] = {1,2,3,4,5}, arr3[5] = {2,3,4,5,6};

	vector<int> v1{1,2,3,4,5}, v2{1,2,3,4,5}, v3{2,3,4,5,6};

	if (arr1 == arr2) {
		cout << "arr1 and arr2 are equal" << endl;
	}
	else {
		cout << "arr1 and arr2 are unequal" << endl;
	}

	if (arr1 == arr3) {
		cout << "arr1 and arr3 are equal" << endl;
	}
	else {
		cout << "arr1 and arr3 are unequal" << endl;
	}

	if (v1 == v2) {
		cout << "v1 and v2 are equal" << endl;
	}
	else {
		cout << "v1 and v2 are unequal" << endl;
	}

	if (v1 == v3) {
		cout << "v1 and v3 are equal" << endl;
	}
	else {
		cout << "v1 and v3 are unequal" << endl;
	}

	return 0;
}