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

	for (auto it = v1.cbegin(); it != v1.cend(); ++it)
		cout << *it << " ";
	cout << "\nv1 Vector Size: " << v1.size() << endl;

	for (auto it = v2.cbegin(); it != v2.cend(); ++it)
		cout << *it << " ";
	cout << "\nv2 Vector Size: " << v2.size() << endl;

	for (auto it = v3.cbegin(); it != v3.cend(); ++it)
		cout << *it << " ";
	cout << "\nv3 Vector Size: " << v3.size() << endl;

	for (auto it = v4.cbegin(); it != v4.cend(); ++it)
		cout << *it << " ";
	cout << "\nv4 Vector Size: " << v4.size() << endl;

	for (auto it = v5.cbegin(); it != v5.cend(); ++it)
		cout << *it << " ";
	cout << "\nv5 Vector Size: " << v5.size() << endl;

	for (auto it = v6.cbegin(); it != v6.cend(); ++it)
		cout << *it << " ";
	cout << "\nv6 Vector Size: " << v6.size() << endl;

	for (auto it = v7.cbegin(); it != v7.cend(); ++it)
		cout << *it << " ";
	cout << "\nv7 Vector Size: " << v7.size() << endl;

	return 0;
}