#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int ascii=int(ch);
    if((ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122)){
        cout<<"Character is an alphabet";

    }
    else{
        cout<<"Character is not an alphabet";
    }
}