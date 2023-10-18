#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    switch (age)
    {
    case 100:
        cout << "You are the winner!" << endl;
        break;
    case 0:
        cout << "You are the loser, you suck!" << endl;
        break;
    default:
        cout << "You are neither a winner nor a loser" << endl;
    }
}