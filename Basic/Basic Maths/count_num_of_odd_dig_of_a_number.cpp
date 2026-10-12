#include <iostream>
using namespace std;
int func(int n){
    n = abs(n);
    int count = 0;
    while(n != 0){
        int temp = n % 10;
        if(temp % 2 == 1) count++;
        n /= 10;
    }return count;
}
int main(){
    cout << func(10020) << endl;
}