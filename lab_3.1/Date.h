#include "Triad.h"
class Date: 
	public Triad
{
private:
	Triad t;
public:
	Date(const int f = 0, const int s = 0, const int t = 0);
	Date(const Date& r);
	~Date(void);

	Triad getTriad() const { return t; }

	bool Le(Triad t) const;
	bool Eq(Triad t) const;
	bool Gt(Triad t) const;
	bool Ne(Triad t) const;
	bool Leq(Triad t) const;
	bool Gtq(Triad t) const;

	operator string() const;

	friend ostream& operator << (ostream& out, const Date& r);
	friend istream& operator >> (istream& in, Date& r);

};

