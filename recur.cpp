//Add the sum of the amount of digits inputted.

#include <iostream>

using namespace std;

int recur(int a)
{
	if (a == 0)
	{
		return 0;
	}
	else
	{
		int sum = (a % 10) + recur(a / 10); //modulus gives the amount of digits. division gives the number itself.
		return sum;
	}
}
