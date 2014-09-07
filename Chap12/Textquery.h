#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "QueryResult.h"

#include <vector>
#include <string>
#include <memory>
#include <set>
#include <map>
#include <sstream>

using std::vector; using std::string; using std::ifstream; using std::shared_ptr; using std::map; using std::set; using std::getline; using std::istringstream;

class QueryResult;
class TextQuery {
public:
	TextQuery(ifstream&);
	QueryResult query(const string&) const;
private:
	shared_ptr<vector<string>> file;
	map<string, shared_ptr<set<vector<string>::size_type>>> wm;
};

#endif