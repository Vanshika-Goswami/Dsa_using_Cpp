// converting one datatype in another

// implicit typecasting: aka automatically converting one data type into another
// int to float 
#include <iostream>
using namespace std;

int main(){
//     int num= 5;
//     float b=5.5;
//     float result =num+b; // compiler convert int to float here beacause calculation need to be performed with same datatype
//     cout<<result;
// 

// explicit typecasting
// float pi= 3.14;
// int a=(int)pi;
// cout<<a;

//ASCII VALUE
// char ch='a';
// cout<<(int)ch;

//QUESTION: to print the alphabetic position (like 1 for A , 2 for B and so on)
// char ch='Z';
// cout<<(int)ch-64;

// HOMEWORK : TAKE INPUT CHAR FROM USER AND THEN RETURN ITS POSITION 
char ch;
cout<<"Enter a character(A-Z): ";
cin>>ch;
cout<<(int)ch-64;

}