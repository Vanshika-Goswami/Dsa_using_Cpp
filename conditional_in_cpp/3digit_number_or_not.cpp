// multiple condition using &&(logical and ) and ||(logical or)
// Take positive integer input and tell if it is a three digit number or not
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>=99 && a<=999){
        cout<<"It is a three digit number";
    }
    else{
        cout<<"It is not a three digit number";
    }
    
   
}



// if(a>999){
//     cout<<"Number is not a three digit number";
// }
// else if(a<100){
//     cout<<"Number is not a three digit number";}
// else{
//     cout<<"Number is a three digit number";}