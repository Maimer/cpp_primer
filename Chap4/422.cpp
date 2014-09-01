#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> grades{25, 100, 45, 68, 43, 15, 77, 48, 91, 0};

	for(auto grade : grades) {
		string finalgrade = (grade > 90) ? "High Pass" : (grade < 60) ? "Fail" : (grade <= 75 && grade>= 60) ? "Low Pass" : "Pass";
		cout << grade << " is " << finalgrade << endl;
	}

	return 0;
}