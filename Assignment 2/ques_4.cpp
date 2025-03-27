// 4. Given the length and breadth of a rectangle, write a program to find whether
// numerically the area of the rectangle is greater than its perimeter.
#include <iostream>
using namespace std;
int main() {
    int length, breadth, area, perimeter;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if(area>perimeter){
        cout << "The area of the rectangle is greater than its perimeter.";
    }
    else if(area==perimeter){
        cout << "The area of the rectangle is equal to its perimeter.";
    }
    else{
        cout << "The area of the rectangle is not greater than its perimeter.";
    }
}