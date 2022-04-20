#include "Date.h" 
#include <iostream>

using namespace std;

int main()
{
	int f, s, t;

	cout << "D1 : " << endl; cin >> f; cin >> s; cin >> t;
	Date d1(f, s, t);

    cout << "D2 : " << endl; cin >> f; cin >> s; cin >> t;
	Date d2(f, s, t);

    cout << d1 << "  " << d2 << endl;

	if (d1.Le(d2))
		cout << "d1 < d2" << endl;
	else if (d1.Eq(d2))
		cout << "d1 = d2" << endl;
	else
		cout << "d1 > d2" << endl;
}
