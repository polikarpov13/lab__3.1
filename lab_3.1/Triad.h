#pragma once
#include <iostream>
#include <string>

using namespace std;

class Triad
{
	int first, second, third;
public:
	Triad(const int f = 0, const int s = 0, const int t = 0);
	Triad(const Triad& T);
	~Triad(void);

	int getFirst() const { return first; }
	int getSecond() const { return second; }
	int getThird() const { return third; }

	void setFirst(const int f) { first = f; }
	void setSecond(const int s) { second = s; }
	void setThird(const int t) { third = t; }

	bool Le(Triad t) const;
	bool Eq(Triad t) const;

	operator string() const;

	friend ostream& operator << (ostream& out, const Triad& T);
	friend istream& operator >> (istream& in, Triad& T);

};

