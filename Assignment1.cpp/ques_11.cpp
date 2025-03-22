// 11. What will be the output of the following code?
#include<iostream>
using namespace std;
int main(){
    int a= 3,b=5,c;
    c= a++ + ++b; //here a=4, b=6..... value of c = (3(after using this value it will be incremented) + 6)
    cout<<a <<" "<< b<< " "<<c;
}