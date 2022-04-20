#include "Triad.h"
#include <sstream>

Triad::Triad(const int f, const int s, const int t) 
	: first(f), second(s), third(t)
{ }

Triad::Triad(const Triad & T) {
	first = T.first;
	second = T.second;
	third = T.third;
}

Triad::~Triad(void)
{ }

bool Triad::Le(Triad t) const {
	if (first < t.first) return true;
	if (first > t.first) return false;
	if (second < t.second) return true;
	if (second > t.second) return false;
	if (third < t.third) return true;
	if (third > t.third) return false;
	return false;
}

bool Triad::Eq(Triad t) const {
	if ((first == t.first) && (second == t.second) && (third == t.third)) return true;
	return false;
}

Triad::operator string() const {
	stringstream ss;
	ss << getFirst() << "  " << getSecond() << "  " << getThird() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Triad& T) {
	return out << (string)T;
}

istream& operator >> (istream& in, Triad& T) {
	int f, s, t;
	cout << "First : "; in >> f;
	cout << "Second : "; in >> s;
	cout << "Third : "; in >> t;

	T.setFirst(f);
	T.setSecond(s);
	T.setThird(t);

	return in;
}


