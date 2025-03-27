// 1. Take 2 integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b){
        cout<<"The greatest number is: "<<a;
    }
    else if (a<b){
        cout<<"The greatest number is: "<<b;
    }
    else{cout<<"Both the numbers are equal";}
}
