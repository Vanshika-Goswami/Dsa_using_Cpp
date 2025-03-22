// 9. Predict the output of the following code snippet:
#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<< x++ <<" "<<++x;
//answer should be 5 and 7 but its showing 6 and 7
//though below code will always give 5 and 7 as output
// int x = 5;
//     cout << x << " ";
//     x++;
//     ++x;
//     cout << x;
}
