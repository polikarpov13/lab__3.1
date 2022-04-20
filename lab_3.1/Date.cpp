#include "Date.h"
#include <sstream>

Date::Date(const int f, const int s, const int t) {
	int a = f;
	int b = s;
	int c = t;

	if (a > 30) {
		a -= 30;
		b++;
	}
	if (a < 0) {
		a += 30;
		b--;
	}

	if (b > 12) {
		b -= 12;
		c++;
	}
	if (b < 0) {
		b += 12;
		c--;
	}

	setFirst(a);
	setSecond(b);
	setThird(c);
}

Date::Date(const Date& D) {
	int a = D.getFirst();
	int b = D.getSecond();
	int c = D.getThird();

	if (a > 30) {
		a -= 30;
		b++;
	}
	if (a < 0) {
		a += 30;
		b--;
	}

	if (b > 12) {
		b -= 12;
		c++;
	}
	if (b < 0) {
		b += 12;
		c--;
	}

	setFirst(a);
	setSecond(b);
	setThird(c);
}

Date::~Date(void)
{ }

bool Date::Le(Triad t) const {
	if (this->getFirst()< t.getFirst()) return true;
	if (this->getFirst() > t.getFirst()) return false;
	if (this->getSecond() < t.getSecond()) return true;
	if (this->getSecond() > t.getSecond()) return false;
	if (this->getThird() < t.getThird()) return true;
	if (this->getThird() > t.getThird()) return false;
	return false;
}

bool Date::Eq(Triad t) const {
	if ((this->getFirst() == t.getFirst()) && (this->getSecond() == t.getSecond()) && (this->getThird() == t.getThird())) return true;
	return false;
}

Date::operator string() const {
	stringstream ss;
	ss << getFirst() << "  " << getSecond() << "  " << getThird() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Date& D) {
	return out << (string)D;
}

istream& operator >> (istream& in, Date& T) {
	int f, s, t;
	cout << "First : "; in >> f;
	cout << "Second : "; in >> s;
	cout << "Third : "; in >> t;

	T.setFirst(f);
	T.setSecond(s);
	T.setThird(t);

	return in;
}

