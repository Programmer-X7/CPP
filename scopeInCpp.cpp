#include<iostream>
using namespace std;

int a = 50; // Global Variable

int sum(int x, int y) {
    return a; // a = 50
}

int main() {
    int a = 10; // Local Variable
    cout<<a<<endl; //a = 10
    cout<<::a<<endl; // ::a = 50
    cout<<sum(10,20); // return a (50)
    return 0;
}
