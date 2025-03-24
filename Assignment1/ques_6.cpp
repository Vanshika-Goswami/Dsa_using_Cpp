// 6. Take a floating-point number as input, typecast it into an integer, and print both values.
#include<iostream>
using namespace std;
int main() {
    float a;
    cout<<"Enter a floating point number: ";
    cin>>a;
    int b = (int)a;
    cout<<"The float value is:"<<a<<"\n";
    cout<<"The integer value is:"<<b;
}