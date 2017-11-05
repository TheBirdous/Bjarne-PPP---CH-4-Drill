#include "../../std_lib_facilities.h"

int main()
{
	double n = 0;
	double iL = 0;
	double iH = 0;
	double x = 0;

	while (cin >> n)
	{
		if ((x < n) && (n > iH))
			iH = n;
		if ((x > n) && (n < iL))
			iL = n;
		if (n == iL)
			cout << n << ", smallest one so far." << '\n';
		if (n == iH)
			cout << n << ", biggest one so far." << '\n';
		if (n != iH && n != iL)
			cout << n << ", nothing." << '\n';
		n = x;

	}
}