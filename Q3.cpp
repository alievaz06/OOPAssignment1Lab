#include <iostream>
using namespace std;
struct Location
{
    double latitude;
    double longitude;
};

void swap(Location* a, Location* b)// pointer version
{
    Location temp = *a;
    *a = *b;
    *b = temp;
}
void swap(Location& a, Location& b) // reference version
{
    Location temp = a;
    a = b;
    b = temp;
}