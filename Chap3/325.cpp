#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<unsigned> grades;
	vector<unsigned> scores(11, 0);
	unsigned grade;

	while(cin >> grade) {
		if(grade <= 100)
			grades.push_back(grade);
			++scores[grade/10];
	}

	for(auto i : scores){
		cout << i << " ";
	}

	cout << endl;

	vector<unsigned> score2(11, 0);

	for(auto it = grades.begin(); it != grades.end(); ++it) {
		unsigned i = *it;
		++(*(score2.begin() + i/10));
	}

	for(auto it = score2.begin(); it != score2.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}