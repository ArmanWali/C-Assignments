#include <iostream>
using namespace std; 
int main(){
    int n,r,fact1=1,fact2=1;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    if(n>=r){
    
    for(int i=1; i<=n; i++){
        fact1=fact1*i;
    }
    for(int i=1; i<=n-r; i++){
        fact2=fact2*i;
    }
    
    cout<<"The nPr value of " <<n<< "P"<<r<<" = "<<fact1/fact2;}
    else{cout<<"Please enter the value of r less than n: ";}
}