// 2. Given the radius of the circle predict whether numerically area of this circle is
// larger than the circumference or not.
#include <iostream>
using namespace std;
int main(){
    float radius,area,circum;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    area=3.14*radius*radius;
    circum=2*3.14*radius;
    if(circum>area){
        cout<<"Circumference of the circle is larger than the area.";
    }
    else{
        cout<<"Area of the circle is larger than the circumference.";
    }
}