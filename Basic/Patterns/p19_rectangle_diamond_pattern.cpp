#include <iostream>
using namespace std;
void func(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout << "*";
        }
        for(int j=1; j<=2*i-2; j++){
            cout << " ";
        }
        for(int j=i; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int j=2*(n-i); j>=1; j--){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    func(5);
}