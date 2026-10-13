#include <iostream>
using namespace std;
int func(int n){
    int count = 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    return count;
}
int func1(int n){
    return log10(n)+1;
}
int main(){
    func(5324);
    func1(4564);
}