// 7. Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at
// the origin, viz. (0, 0).
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;
    if (x == 0 && y == 0)
    cout << "The point lies at the origin.";
    else if (x == 0)
    cout << "The point lies on the y-axis.";
    else if (y == 0)
    cout << "The point lies on the x-axis.";
    else
    cout << "The point does not lie on the x-axis, y-axis or at the origin.";
    return 0;
}