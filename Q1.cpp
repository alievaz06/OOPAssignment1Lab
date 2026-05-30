#include <iostream>
using namespace std;
#define ARRAY_LENGTH 5


// max of two integers

int max(int a, int b)
{
	return (a > b) ? a : b;
}

// max of three integers

int max(int a, int b, int c)
{
	return max(max(a, b), c);
}

// max of an array of size 5

int max(const int arr[5])
{
	int m = arr[0];
	for (int i = 1; i < ARRAY_LENGTH; ++i)
	{
		if (arr[i] > m) m = arr[i];
	}
	return m;
}


// Max of two arrays of 5 integers each

int max(int a[5], int b[5])
{
	int maxA = max(a);
	int maxB = max(b);

	return max(maxA, maxB);

}