// 14. Write a program that will tell the number of dogs and chicken are there when the
// user will provide the value of total heads and legs.
// For example:
// Input: heads -> 4 legs -> 12
// Output: dogs -> 2 chicken -> 2

#include<iostream>
using namespace std;
int main(){
    int heads, legs, dogs, chicken;
    cout<<"Enter the number of heads: ";
    cin>>heads;
    cout<<"Enter the number of legs: ";
    cin>>legs;
    // heads=dogs+chicken;
    // legs=4*dogs+2*chicken;
    chicken=2*heads-(legs/2);
    dogs=4-chicken;
    cout<<"Dogs: "<<dogs<<"  and Chicken:"<<chicken;
}