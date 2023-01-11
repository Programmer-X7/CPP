#include<iostream>
using namespace std;

int sumation(int num1, int num2) {

    return (num1+num2);
}

int main() {
    int a,b;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Enter another number :";
    cin>>b;
    cout<<"Sum is : "<<sumation(a,b);
    return 0;
}
