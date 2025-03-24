// What will be the output of the following code?
#include<iostream>
using namespace std;
int main(){
    int a=5, b=10, c=15;
    bool result = a<b && b<c || c==10; //(true && true || false) ---> true|| false --> true
    cout<< result;
    return 0;
}