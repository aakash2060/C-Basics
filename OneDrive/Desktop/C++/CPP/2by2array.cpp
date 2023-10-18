#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }
    return 0;
}