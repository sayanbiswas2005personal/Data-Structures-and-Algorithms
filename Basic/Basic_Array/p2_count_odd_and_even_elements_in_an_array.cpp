#include <iostream>
using namespace std;
pair<int, int> countOddEven(vector<int> &arr)
{
    int count_odd = 0, count_even = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            count_even += 1;
        else
            count_odd += 1;
    }
    return {count_odd, count_even};
}
int main(){
    vector<int> arr = {21,32,4,2,5,6,2};
    pair<int,int> result = countOddEven(arr);
    cout << result.first << result.second;
}