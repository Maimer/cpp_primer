#include <iostream>

using namespace std;

int main()
{
	int arr[10] = {};

	for(size_t i = 0; i < 10; ++i) {
		arr[i] = i;
	}

	for(auto i : arr) {
		cout << i << " ";
	}

	cout << endl;

	return 0;
}