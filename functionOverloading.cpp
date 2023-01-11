#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}
int sum(int x, int y, int a){
    return x + y + a;
}
int main() {
    cout<<"sum of 10 and 20 is :"<<sum(10, 20)<<endl;
    cout<<"sum of 7, 5 and 450 is :"<<sum(7, 5, 450)<<endl;
    return 0;
}