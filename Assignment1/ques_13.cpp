// 13. Write a program to find the euclidean distance between two coordinates.Take both
// the coordinates from the user as input.
// d = √[(x2 - x1)2 + (y2 - y1)2]
#include <iostream>
#include<math.h>
using namespace std;
int main() {
int x1,x2,y1,y2,d;
cout<<"Enter the value of x1: ";cin>>x1;
cout<<"Enter the value of x2: ";cin>>x2;
cout<<"Enter the value of y1: ";cin>>y1;
cout<<"Enter the value of y2: ";cin>>y2;
d=sqrt(x2 - x1)*2 + (y2 - y1)*2;
cout<<"The Euclidean distance between the two coordinates is: "<<d;
}