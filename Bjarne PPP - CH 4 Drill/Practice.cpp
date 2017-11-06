#include "../../std_lib_facilities.h"

int main()
{
	const double m_btw_cm = 100;
	const double in_btw_cm = 2.54;
	const double in_btw_ft = 12;

	double n = 0;
	double iL = 0;
	double iH = 0;
	double converted = 0;

	string unit = " ";

	while (cin >> n >> unit)
	{
		if (unit == "m")
		{
			converted = n*m_btw_cm;
		}
		else if (unit == "in")
		{
			converted = n*in_btw_cm;
		}
		else if (unit == "ft")
		{
			converted = n*in_btw_ft*in_btw_cm;
		}
		else if (unit == "cm")
		{
			converted = n;
		}
		else if (iL == 0 && iH == 0)
		{
			iH = n;
			iL = n;
			cout << n << " " << unit << " You're a special snowflake first val, yahoo!\n";
		}
		else if (n > iH)
		{
			iH = n;
			cout << n << " " << unit << ", is the biggest value so far." << '\n';
		}
		else if (n < iL)
		{
			iL = n;
			cout << n << " " << unit << ", is the smallest value so far." << '\n';
		}
		else
		{
			cout << n << " " << unit << ", nothing." << '\n';
		}

	}
}