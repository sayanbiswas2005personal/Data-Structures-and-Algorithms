#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    return a;
}
int func(int a,int b){
    return (a / gcd(a,b))*b;
}
int main(){
    cout << func(5,6);
}
