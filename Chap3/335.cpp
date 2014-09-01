#include <iostream>

using namespace std;

int main ()
{
	constexpr size_t size = 5;
	int arr[size] = {1,2,3,4,5};

	int *beg = arr, *end = arr + size;

	while (beg < end) {
		*beg = 0;
		++beg;
	} 

	for (auto i : arr) {
		cout << i << " ";
	}

	cout << endl;

	return 0;
}