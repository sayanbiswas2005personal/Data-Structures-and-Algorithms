#include <iostream>
using namespace std;
int func(int n){
    int ans = 1;
    while(n != 0){
        ans = ans * n;
        n--;
    }return ans;
}
int main(){
    cout << func(12);
}