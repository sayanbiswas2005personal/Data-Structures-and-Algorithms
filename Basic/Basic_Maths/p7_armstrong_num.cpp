#include <iostream>
using namespace std;
bool func(int n)
{
    int power = (int)(log10(n) + 1);
    int org = n;
    int sum = 0;
    while (n != 0)
    {
        sum += pow(n % 10, power);
        n /= 10;
    }
    return sum == org;
}
int main()
{
    cout << func(234);
}