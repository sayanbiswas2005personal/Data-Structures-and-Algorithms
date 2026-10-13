#include <iostream>
using namespace std;
bool func(int x)
{
    if (x < 0)
        return false;
    int org = x;
    long rev = 0;
    while (x != 0)
    {
        int temp = x % 10;
        rev = rev * 10 + temp;
        x /= 10;
    }
    return rev == org;
}
int main()
{
    cout << func(32423) ? "True" : "False";
}