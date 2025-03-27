// 5. Write a program to input sides of a triangle and check whether a triangle is
// equilateral, scalene or isosceles triangle.
#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the first side of the triangle: ";cin>>a;
    cout<<"Enter the second side of the triangle: ";cin>>b;
    cout<<"Enter the third side of the triangle: ";cin>>c;
    if(a==b && b==c){
        cout<<"The triangle is equilateral.";}
    else if(a==b || b==c || c==a){
        cout<<"The triangle is isosceles.";
    }
    else{
        cout<<"The triangle is scalene.";}
    }

