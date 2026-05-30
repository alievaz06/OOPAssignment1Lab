#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a; // store the value pointed to by a in a temporary variable
	*a = *b; // assign the value pointed to by b to the location pointed to by a
	*b = temp; // assign the value stored in temp to the location pointed to by b
}

void swap(int& a, int& b)
{
	int temp = a; // store the value of a in a temporary variable
	a = b; // assign the value of b to a
	b = temp; // assign the value stored in temp to b
}