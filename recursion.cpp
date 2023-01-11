#include<iostream>
using namespace std;

int fact(int);
int fib(int);

int main() {
    // Factorial of a number
    int a;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    cout<<"The factorial is : "<<fact(a)<<endl;

    // Finding value at nth position in Fibonacii Series
    int b;
    cout<<"Enter the position :"<<endl;
    cin>>b;
    cout<<"The value at position "<<b<<" is "<<fib(b)<<endl;
    return 0;
}

int fact(int n){
    if(n<2){
        return 1;
    }
    return n * fact(n-1);
}

int fib(int p){
    if(p<2){
        return 1;
    }
    return fib(p-1) + fib(p-2);
}

// Q : Print Fibonacii series using recoursion