#include<iostream>
using namespace std;

typedef struct employee{
    int id;
    char cid;
    float salary;
} ep;

int main(){
    ep suman;
    suman.id = 7400;
    suman.cid = 'x';
    suman.salary = 498232;

    cout<<suman.id<<endl;
    cout<<suman.cid<<endl;
    cout<<suman.salary;
}