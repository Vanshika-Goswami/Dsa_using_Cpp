// What will be the output of the following code?
#include<iostream>
using namespace std;
int main(){
    int x=5,y=3;
    cout<<(x & y)<<" "<<(x && y); // (5(101)&3(011) in binary is (001) thus 1 )  (5&&3 is 1 as both values are non zeros)
    return 0;
}