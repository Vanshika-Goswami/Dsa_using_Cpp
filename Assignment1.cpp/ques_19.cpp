// What will be the output of the following code?
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=5;
    int c=a+=b-=2;  // c=a and [ a= 10+b = 13] and [b=5-2=3]  thus a=13 and c =13
    cout<< a<< " "<<b<<" "<<c;
}