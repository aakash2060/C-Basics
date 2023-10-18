#include <iostream>
using namespace std;

int main()
{
    int age;
    int marks;

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "Enter your marks: " << endl;
    cin >> marks;

    if (1 >= age > 100 || 1 > marks > 100)
    {
        cout << "One or more Invalid Inputs" << endl;
    }
    else if (age < 18 || marks < 50)
    {
        cout << "Sorry! You donot meet one of the criterias!" << endl;
    }
    else
    {
        cout << "You are Hired!" << endl;
    }
    return 0;
}