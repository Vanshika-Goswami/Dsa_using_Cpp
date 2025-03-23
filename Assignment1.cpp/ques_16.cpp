// 16. Given 2 fractions, find the sum of those 2 fractions.Take the numerator and
// denominator values of the fractions from the user.
#include <iostream>
using namespace std;
int main(){
    int num1,num2,den1,den2,ans_num,ans_den;
    cout<<"Enter the numerator of the first fraction: ";cin>>num1;
    cout<<"Enter the denominator of the first fraction: ";cin>>den1;
    cout<<"Enter the numerator of the second fraction: ";cin>>num2;
    cout<<"Enter the denominator of the second fraction: ";cin>>den2;
    ans_num=(num1*den2)+(num2*den1);
    ans_den=den1*den2;
    cout<<"The sum of the two fractions is: "<<ans_num<<"/"<<ans_den;

}