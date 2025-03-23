// What will be the output of the following code?
#include<iostream>
using namespace std;
int main(){
    int a=6, b=3;
    a+=b *= 2; //(b*=2--> b=b*2-->b=3*2=6)(a=a+b=6+6=12) thus a =12 and b=6
    cout<< a<< " "<<b;
    return 0;
}