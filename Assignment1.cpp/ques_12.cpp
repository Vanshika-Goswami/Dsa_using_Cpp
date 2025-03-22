// 12. What will be the output of the following code?
#include<iostream>
using namespace std;
int main(){
    int x=4,y=2,z;
    z= x++ * --y + ++x; //y decreases first, x is used before increasing, their product is calculated, 
    // x increases again before being added, and finally, x = 6, y = 1, and z = 10
    cout<<x<<" "<<y<<" "<<z;
}