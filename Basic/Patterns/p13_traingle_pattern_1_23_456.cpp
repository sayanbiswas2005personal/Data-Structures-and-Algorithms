#include <iostream>
using namespace std;
void func(int n){
    int x = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) cout << x++ << " ";
        cout << endl;
    }
}
int main(){
    func(5);
}