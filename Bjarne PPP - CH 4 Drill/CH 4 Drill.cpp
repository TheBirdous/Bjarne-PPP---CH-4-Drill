#include "../../std_lib_facilities.h"

int main()
{
	double n = 0;
	double iL = 0;
	double iH = 0;
	double x = 0;

	while (cin >> n)
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