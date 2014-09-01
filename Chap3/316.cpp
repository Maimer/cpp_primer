#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	for (auto i : v1)
		cout << i << " ";
	cout << "\nv1 Vector Size: " << v1.size() << endl;

	for (auto i : v2)
		cout << i << " ";
	cout << "\nv2 Vector Size: " << v2.size() << endl;

	for (auto i : v3)
		cout << i << " ";
	cout << "\nv3 Vector Size: " << v3.size() << endl;

	for (auto i : v4)
		cout << i << " ";
	cout << "\nv4 Vector Size: " << v4.size() << endl;

	for (auto i : v5)
		cout << i << " ";
	cout << "\nv5 Vector Size: " << v5.size() << endl;

	for (auto i : v6)
		cout << i << " ";
	cout << "\nv6 Vector Size: " << v6.size() << endl;

	for (auto i : v7)
		cout << i << " ";
	cout << "\nv7 Vector Size: " << v7.size() << endl;

	return 0;
}