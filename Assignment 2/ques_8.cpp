// 8. Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all
// the three points fall on one straight line
#include <iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"Enter the coordinates of the first point: ";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of the second point: ";
    cin>>x2>>y2;
    cout<<"Enter the coordinates of the third point: ";
    cin>>x3>>y3;
    if((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))==0){
        cout<<"The three points are collinear.";
    }
    else{
        cout<<"The three points are not collinear.";
    }
}
// (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) == 0