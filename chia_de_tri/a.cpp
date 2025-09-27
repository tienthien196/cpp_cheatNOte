#include <iostream>
using namespace std;
void func(int n){
    if(n<1) return; 
    cout << "tiến thiện"<< endl;
    func(n-1);
    cout << "hoàn thiện"<<  n << endl;
}

int main(){
    func(5);

    return 0;
}