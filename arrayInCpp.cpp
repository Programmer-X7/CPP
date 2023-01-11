#include<iostream>
using namespace std;

int main() {
    int j = 0, k =0;
    int marks[4] = {10, 20, 30 ,40};
    cout<<"Printing the array:"<<endl;
    cout<<"Without Using Loop"<<endl;
    cout<<marks[0]<<endl;    
    cout<<marks[1]<<endl;    
    cout<<marks[2]<<endl;    
    cout<<marks[3]<<endl;   

    // Using For Loop
    cout<<"Using For Loop"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }
    

    // Using While Loop
     cout<<"Using While Loop"<<endl;
    while (j<4)
    {
        cout<<marks[j]<<endl;
        j++;
    }


    // Using While Loop
     cout<<"Using Do-While Loop"<<endl;
    do
    {
        cout<<marks[k]<<endl;
        k++;
    } while (k < 4);
    

    // Taking input from the user for array[]
    int x,y;
    cout<<"Enter total number of elements :"<<endl;
    cin>>x;

    int arr[x];

    cout<<"----- Enter the values of the array -----"<<endl;
    for(y=0;y<x;y++) {
        cout<<"Enter "<<y<<"th element : ";
        cin>>arr[y];
    }

    // Display the array[]
    int z;
    cout<<"The elements are:"<<endl;
    for(z=0;z<x;z++)
    {
        cout<<arr[z];
        cout<<"\t";
    }
  
    return 0;
}