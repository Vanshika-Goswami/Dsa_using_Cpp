#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price:";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price:";
    cin>>sp;
    if(cp>sp){
        cout<<"Seller has incurred loss of Rupees"<<cp-sp;
    }
    else{
        cout<<"Seller has incurred profit of Rupees"<<sp-cp;
    }
}