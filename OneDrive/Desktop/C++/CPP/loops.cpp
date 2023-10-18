#include <iostream>
using namespace std;
int main()
{ // This is a while loop
    int a = 0;
    while (a < 34) // a is less than 34
    {
        cout << "We are at number: " << a << endl;
        a++;
    }
    // This is a do while loop
    int b = 3379;
    do
    {
        cout << "We are at number: " << b << endl;
        b++;
    } while (b < 3378); // do while loop repeats itself even if the case doesn't get satisfied.

    // For loop
    for (int i = 1; i <= 34; i++)
    {
        cout << "The number we have is: " << i << endl;
    }
}