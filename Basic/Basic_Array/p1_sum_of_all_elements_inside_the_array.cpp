#include <iostream>
using namespace std;
int func(vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main(){
    vector<int> arr = {3,5,6,7,8};
    cout << func(arr);
}