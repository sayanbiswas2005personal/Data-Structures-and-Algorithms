#include <iostream>
using namespace std;
void func(int n){
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=1; j--){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << (char)('A'+j-1);
        }
        for(int j=2; j<=i; j++){
            cout << (char)('A'+j-1);
        }
        cout << endl;
    }
}
int main(){
    func(5);
}