#include<iostream>
using namespace std;

int main() {
    int marks[5] = {10, 20, 30, 40, 50};
    int* p = marks;

    cout<<"The value of marks[0] : "<<*p<<endl;
    cout<<"The value of marks[1] : "<<*(p+1)<<endl;
    cout<<"The value of marks[2] : "<<*(p+2)<<endl;
    cout<<"The value of marks[3] : "<<*(p+3)<<endl;
    cout<<"The value of marks[4] : "<<*(p+4)<<endl;


    return 0;
}