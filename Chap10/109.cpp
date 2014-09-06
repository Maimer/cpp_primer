#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

bool five(const string &s)
{
	return s.size() >= 5;
}

void printout(vector<string> &words)
{
	for (auto &i : words) {
		cout << i << " ";
	}
	cout << endl;
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	printout(words);
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	printout(words);
}

int main()
{
	vector<string> words;
	string i;

	while (cin >> i) {
		words.push_back(i);
	}

	printout(words);

	elimDups(words);
	stable_sort(words.begin(), words.end(), isShorter);
	printout(words);

	auto end_five = partition(words.begin(), words.end(), five);
	words.erase(end_five, words.end());
	printout(words);

	return 0;
}