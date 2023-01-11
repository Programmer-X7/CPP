#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int num1, num2, sum;
    cout<<"Enter two numbers :"<<endl;
    cin >> num1 >> num2;
    sum= num1 + num2;
    cout<<"The sum is : "<<setw(4)<<sum;    // Use SETW from iomanip
    return 0; 
}