// 8. What is the output of this program?
#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=5;
    a++ , b-- ; //here value of a becomes 5 and b become 4
    cout<<++a<<" "<<b--; //here first there will be increment in value of a before printing thus a=6(in o/p) and but for b 4 will be print and now value of b is 3 after printing
}
// output will be 6 4 