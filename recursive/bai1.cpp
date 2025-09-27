#include <iostream>
#include <cmath> // nếu cần abs
#include <stdio.h>

using namespace std;

// Fibonacci: fib(0)=0, fib(1)=1, fib(2)=1, fib(3)=2, ...
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

// Tổng chữ số (chỉ cho n >= 0)
int sumDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}

int res4(int x, int n){
    if (n==0) return 1;
    return x* res4(x, n-1);
}
// tính x^n = x*x*...*x (n lần) với n >= 0
int power(int x, int n){
    if(n == 0) return 1;
    return x * power(x, n-1);

}

int power2(int x, int n, int m){
    if (n==0) return 1;
    return power2(x, n-1 , m* x);
} 

int fib4(int n){
    if(n<= 2) return 1;
    return fib4(fib(n-1) + fib(n-2));
} 

int lev2(int x, int m){
    if(x<=1) return 1;
    cout << "x= "<< x<< " n= "<< ++m << " m=x+n = " << x+ m<< endl;
    return lev2(x-1, m);
}

int coutt(int n){
    if(n<=1) return 1;
    cout <<n<< endl;
    return n* coutt(n-1);
}

// recurrsion down
void print_down(int n) {
    if (n == 0) return;
    printf("%d ", n);      // ← in TRƯỚC
    print_down(n - 1);     // rồi mới gọi
}


// chua 
void print_up(int n) {
    if (n == 0) return;
    print_up(n - 1);       // gọi trước
    printf("%d ", n);      // ← in SAU → khi quay lại
}

void timmer(int n){
    if (n==0 || n> 5) return ;
    timmer(n+1);
    cout << n << endl;
}

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b
    );
}


// p tach so 
void tachso(int n, int x){
    if (n==0 || n<x) return;
    if(n%x == 0)
    {
        cout << x << " ";
        tachso(n/x, x);
    }
    else return tachso(n, x+1);   
}


int main() {            

    tachso(90, 2);
    return 0;
}