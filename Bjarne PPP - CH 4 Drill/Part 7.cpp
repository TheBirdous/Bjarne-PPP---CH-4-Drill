#include "../../std_lib_facilities.h"

int main()
{
	const double m_btw_cm = 100;
	const double in_btw_cm = 2.54;
	const double in_btw_ft = 12;

	double n = 0;
	double iL = 0;
	double iH = 0;
	double x = 0;

	string unit = " ";

	while (cin >> n >> unit)
	{
		if (iL == 0 && iH == 0)
		{
			iH = n;
			iL = n;
			cout << "You're a special snowflake first val, yahoo!\n";
		}
		else if (n > iH)
		{
			iH = n;
			cout << n << ", biggest one so far." << '\n';
		}
		else if (n < iL)
		{
			iL = n;
			cout << n << ", smallest one so far." << '\n';
		}
		else
		{
			cout << n << ", nothing." << '\n';
		}

	}
}