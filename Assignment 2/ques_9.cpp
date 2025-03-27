// 9. Write a C++ program to input any character and check whether it is the alphabet,
// digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>> ch;
    int ascii;
    ascii=int(ch);
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        cout<<"It is an alphabet.";
    }
    else if( ascii>=48 && ascii<=57){
        cout<<"It is a digit.";
    }
    else{
        cout<<"It is a special character.";
    }

}