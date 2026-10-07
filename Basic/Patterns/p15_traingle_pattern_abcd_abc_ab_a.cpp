#include <iostream>
using namespace std;
void func(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << (char)(64+j);
        }cout << endl;
    }
}
int main(){
    func(5);
}