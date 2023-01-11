#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* b = &a;

    cout<<"The address of a is : "<<b<<endl;
    cout<<"The value at address b is : "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;

    cout<<"The address of b :"<<c<<endl;
    cout<<"The value stotes at c is :"<<**c;
    return 0;
}