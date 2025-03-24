#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a%7==0){
        cout<<"The number is divisible by 7";
    }
    else{
        cout<<"The number is not divisible by 7";
    }
}