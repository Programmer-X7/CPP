#include<iostream>
using namespace std;

typedef union gender{
    char male;
    int female;
    float other;
} gd;

int main(){
    gd player1;
    // player1.male = 'A'; 
    player1.female = 10;    // You can only use 1 at a time
    
    cout<<player1.female;
    return 0;
}