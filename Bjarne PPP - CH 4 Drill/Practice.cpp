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
	double sum = 0;
	double meters = 0;

	vector <double> units;

	bool unit_correct = true;

	string unit = " ";
	string smallest_unit = " ";
	string largest_unit = " ";

	while (cin >> value >> unit)
	{
				if (unit == "m")
				{
					unit_correct = true;
					converted = value*m_btw_cm;
				}
					else if (unit == "in")
					{
						unit_correct = true;
						converted = value*in_btw_cm;
					}
						else if (unit == "ft")
						{
							unit_correct = true;
							converted = value*in_btw_ft*in_btw_cm;
						}
							else if (unit == "cm")
							{
								unit_correct = true;
								converted = value;
							}
								else
								{
									unit_correct = false;
									converted = 0;
									cout << "Error, invalid or no unit has been entered, please try again: ";
								}

				if (iL == 0 && iH == 0 && unit_correct == true)
				{
					iH = converted;
					iL = converted;
					cout << value << " " << unit << " You're a special snowflake first val, yahoo!\n";
				}
					else if (converted >= iH && unit_correct == true)
					{
						iH = converted;
						cout << value << " " << unit << ", is the biggest value so far." << '\n';
					}
						else if (converted <= iL && unit_correct == true)
						{
							iL = converted;
							cout << value << " " << unit << ", is the smallest value so far." << '\n';
						}
							else if ( iL < converted < iH && unit_correct == true)
							{
								cout << value << " " << unit << ", nothing." << '\n';
							}	
		
				sum = sum + converted;
				meters = converted / 100;
				units.push_back(meters);
				sort(units);
	}

	cout << "The entered values are: {" << units[0];

	for (int i = 1; i<units.size(); ++i)
	{
		cout << ", " << units[i];
	}
	cout << "}.\n";
	cout << "The sum of all entered values is: " << sum / 100 << "m\n";
	cout << "The smallest value of all entered values is: " << iL / 100 << "m\n";
	cout << "The largest value of all entered values is: " << iH / 100 << "m\n";
	keep_window_open();
}