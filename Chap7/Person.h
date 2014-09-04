#ifndef PERSON_H
#define PERSON_H

#include <string>

using std::istream; using std::ostream;

class Person {

friend:

public:
	Person() = default;
	Person(const std::string &s) : name(s) { }
	Person(std::string &s, &r) : name(s), address(r) { }
	std::string who() const { return name; }
	std::string where() { return address; }
private:
	std::string name;
	std::string address;
};

std::ostream &print(std::ostream&, const Person&);
std::istream &read(std::istream&, Person&);

istream &read(istream &is, Person &item)
{
	is >> name >> address;
	return is;
}

ostream &print(ostream &os, const Person &item)
{
	os << item.name << item.address;
	return os;
}

#endif