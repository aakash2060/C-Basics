#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: " << endl; // endl does newline
    cin >> a;                           // Takes input for a
    int b;
    cout << "Enter a number for b" << endl;
    cin >> b; // Takes input for b

    cout << "a / b is : " << (float)a / b << endl; // float on one of the values converts the answer to float
    // if there was no float with a then it would give a integer value which is incorrect for division

    return 0;
}