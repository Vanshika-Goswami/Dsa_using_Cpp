// 6. If the marks of A, B and C are input through the keyboard, write a program to
// determine the student scoring least marks.
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"Enter the marks of A: ";
    cin>>a;
    cout<<"Enter the marks of B: ";
    cin>>b;
    cout<<"Enter the marks of C: ";
    cin>>c;
    if(a<b && a<c){
        cout<<"A has scored the least marks.";
    }
    else if(b<a && b<c){
        cout<<"B has scored the least marks.";
    }
    else if(c<a && c<b){
        cout<<"C has scored the least marks.";
    }
    else{
        cout<<"Two or more students have scored the same marks.";
    }
}