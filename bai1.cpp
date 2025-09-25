#include <iostream>

using namespace std;

int res(int x , int n){
    if (n==0) return 1;
    return res(x, n-1)*x;
}


int main(){
    cout << res(3,2)<< endl;
    return 0;

}