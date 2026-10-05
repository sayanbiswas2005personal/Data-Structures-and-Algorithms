#include <iostream>
using namespace std;
void func(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << (i+j+1)%2;
        }
        cout << endl;
    }
}
int main(){
    func(5);
}