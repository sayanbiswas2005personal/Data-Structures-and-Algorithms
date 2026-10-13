#include <iostream>
#include <climits>
using namespace std;
int func(int n){
    if(n == 0) return 0;
    int largest = INT_MIN;
    while(n != 0){
        largest = max(largest,n % 10);
        n /= 10;
    }return largest;
}
int main(){
    cout << func(23423);
}