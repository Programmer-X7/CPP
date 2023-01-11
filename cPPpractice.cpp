#include<iostream>
using namespace std;

int sum(int x, int y){
    return x + y;
}

int main(){
    int a, b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<"The sum is : "<<sum(a, b)<<endl;
    return 0;
}