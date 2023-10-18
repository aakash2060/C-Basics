#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int a, b;
    cout << "Enter the first number" << a << endl;
    cin >> a;
    cout << "Enter the second number" << b << endl;
    cin >> b;

    cout << "The sum of the number is: " << add(a, b) << endl;
}