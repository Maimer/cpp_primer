#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> words;

	string word;

	while(cin >> word)
		words.push_back(word);

	for(auto &i : words){
		for(auto &j : i)
			j = toupper(j);
	}

	int index = 0;

	for(auto i : words) {
		if(index < 7) {
			cout << i << " ";
			++index;
		}
		else {
			cout << i << endl;
			index = 0;
		}
	}

	cout << endl;

	return 0;
}