#include <iostream>
using namespace std;
int multiply(int a, int b, int c = 1) // int version
{
    return a * b * c;
}
double multiply(double a, double b) // double version
{
    return a * b;
} 
// No, we cannot add another function: multiply(int, int) because it would conflict with multiply(int, int, int c = 1) When multiply(2, 3) is called, the compiler would not know
// which function to use.
