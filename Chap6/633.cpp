#include <iostream>
#include <vector>

using namespace std;

void contents(const vector<int> v2, int index)
{
	if (index < v2.size()) {
		cout << v2[index] << " ";
		return contents(v2, index + 1);
	}
	cout << endl;
}

int main()
{
	vector<int> v1;
	int i;

	while (cin >> i) {
		if (i != 0){
			v1.push_back(i);
		}
		else {
			break;
		}
	}

	contents(v1, 0);

	return 0;
}