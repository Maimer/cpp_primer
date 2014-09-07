#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <set>

using std::ostream; using std::string; using std::shared_ptr; using std::set; using std::vector; using std::endl;

class QueryResult {
friend ostream& print(ostream&, const QueryResult&);
public:
	QueryResult(string s, shared_ptr<set<vector<string>::size_type>> p, shared_ptr<vector<string>> f) : sought(s), lines(p), file(f) {}
private:
	string sought;
	shared_ptr<set<vector<string>::size_type>> lines;
	shared_ptr<vector<string>> file;
};

ostream &print(ostream&, const QueryResult&);

#endif