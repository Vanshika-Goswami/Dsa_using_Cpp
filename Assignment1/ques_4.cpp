// 4. Take input of principle, time and rate and find the simple interest
#include<iostream>
using namespace std;
int main() {
float P,R,T;
cout<<"Enter the principal amount: ";cin>>P;
cout<<"Enter the time in years: ";cin>>T;
cout<<"Enter the rate of interest: ";cin>>R;
float si=(P*R*T)/100;
cout<<"The simple interest is: "<<si;


}
