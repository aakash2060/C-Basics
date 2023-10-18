#include <iostream>
using namespace std;
int main()
{
    // int arr[3] = {1, 6, 8};
    // cout << arr[2];
    // int arr[4][4];
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; i++)
    //         arr[i][j] = i, j;
    //     cout << arr[i][j] << endl;
    // }

    // return 0;
    int array[10];
    for (int j = 0; j < 10; j++)
    {
        array[j] = j;
        cout << array[j] << endl;
    }

    printf("The size of an int is %d\n", sizeof(int));
}
