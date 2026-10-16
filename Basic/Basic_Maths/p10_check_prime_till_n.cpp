#include <iostream>
using namespace std;
int countPrimes(int n)
{
    vector<bool> prime(n, true);
    if (n <= 2)
        return 0;
    prime[0] = prime[1] = false;
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            for (long long j = 1LL * i * i; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
            count++;
    }
    return count;
}
int main(){
    cout << countPrimes(23);
}