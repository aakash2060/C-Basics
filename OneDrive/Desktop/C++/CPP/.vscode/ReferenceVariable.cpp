#include <stdio.h>
#include <math.h>

using namespace std;
void numbers(float &x, float &y);
int main()
{
    float x = 3.0;
    float y = 4.0;

    numbers(x, y);
    printf("normalized vector = (%f, %f) \n", x, y);
    return 0;
}
void numbers(float *x, float *y)
{
    float xW, yW;
    xW = *x;
    yW = *y;
    float magnitude = sqrt(xW * xW + yW * yW);
    *x = xW / magnitude;
    *y = yW / magnitude;
}