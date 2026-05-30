#include <iostream>
using namespace std;

// This Function finds the larger number
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "The larger number is: " << max(num1, num2) << endl;

    return 0;
}