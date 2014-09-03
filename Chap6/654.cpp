#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

typedef int (*vectorp)(int, int);

vector<vectorp> v1{&add, &sub, &mult, &divide};

int main()
{
	int num1, num2;

	while (cin >> num1 >> num2) {
		for (auto i : v1) {
			cout << i(num1, num2) << endl;
		}
	}
	return 0;
}