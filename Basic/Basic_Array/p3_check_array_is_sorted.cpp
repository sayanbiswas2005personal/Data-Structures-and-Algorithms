#include <iostream>
using namespace std;
bool isSorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}
int main(){
    vector<int> arr = {21,32,4,2,5,6,2};
    cout << isSorted(arr);
}