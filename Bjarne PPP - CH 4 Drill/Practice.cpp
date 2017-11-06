#include "../../std_lib_facilities.h"

int main()
{
	const double m_btw_cm = 100;
	const double in_btw_cm = 2.54;
	const double in_btw_ft = 12;

	double value = 0;
	double iL = 0;
	double iH = 0;
	double smallest_converted = 0;
	double converted = 0;
	double largest_converted = 0;

	string unit = " ";
	string smallest_unit = " ";
	string largest_unit = " ";

	while (cin >> value >> unit)
	{
		if (unit == "m")
		{
			converted = value*m_btw_cm;
		}
		else if (unit == "in")
		{
			converted = value*in_btw_cm;
		}
		else if (unit == "ft")
		{
			converted = value*in_btw_ft*in_btw_cm;
		}
		else if (unit == "cm")
		{
			converted = value;
		}
		if (iL == 0 && iH == 0)
		{
			iH = converted;
			iL = converted;
			cout << value << " " << unit << " You're a special snowflake first val, yahoo!\n";
		}
		else if (converted > iH)
		{
			iH = converted;
			cout << value << " " << unit << ", is the biggest value so far." << '\n';
		}
		else if (converted < iL)
		{
			iL = converted;
			cout << value << " " << unit << ", is the smallest value so far." << '\n';
		}
		else
		{
			cout << value << " " << unit << ", nothing." << '\n';
		}

	}
}