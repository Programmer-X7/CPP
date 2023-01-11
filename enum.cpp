#include<iostream>
using namespace std;

int main(){
    enum values{var1, var2, var3};
    values x1 = var2;   // Here 'values' - is a datatype [like  int, float...]
    cout<<x1<<endl;
    
    cout<<var1<<endl;
    cout<<var3<<endl;
}