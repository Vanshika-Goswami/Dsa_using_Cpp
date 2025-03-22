// 10. Explain the difference between x++ and ++x in your own words.
// • Take an integer as input and:
// • Print its value using post-increment (x++).
// • Print its value again using pre-increment (++x).

// solution
// x++ (Post-Increment) → First use the current value, then increase it.
// ++x (Pre-Increment) → First increase the value, then use it.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter an interger number:";
    cin>>x;
    cout<<"Value of x using post-increment (x++): "<<x++<<endl;
    cout<<"Value of x using pre-increment (++x): "<<++x<<endl;
}