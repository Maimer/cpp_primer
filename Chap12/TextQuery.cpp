#include "Textquery.h"
#include "MakePlural.h"

#include <memory>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <fstream>

using std::shared_ptr;
using std::istringstream;
using std::string;
using std::getline;
using std::vector;
using std::map;
using std::set;
using std::cout;
using std::cin;
using std::ostream;
using std::endl;
using std::ifstream;

TextQuery::TextQuery(ifstream &is): file(new vector<string>)
{
	string text;
	while (getline(is, text)) {
		file->push_back(text);
		int n = file->size() - 1;
		istringstream line(text);
		string word;
		while (line >> word) {
			auto &lines = wm[word];
			if (!lines) {
				lines.reset(new set<vector<string>::size_type>);
			}
			lines->insert(n);
		}
	}
}

QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<vector<string>::size_type>> nodata(new set<vector<string>::size_type>);
	auto loc = wm.find(sought);
	if (loc == wm.end()) {
		return QueryResult(sought, nodata, file);
	}
	else {
		return QueryResult(sought, loc->second, file);
	}
}

ostream &print(ostream &os, const QueryResult &qr)
{
	os << qr.sought << " occurs " << qr.lines->size() << " " << make_plural(qr.lines->size(), "time", "s") << endl;
	for (auto num : *qr.lines) {
		os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << endl;
	}
	return os;
}