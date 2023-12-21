#include <iostream>
using namespace std; 

void sequence(int n){
    int num=0;
  for(int i=0; i<n; i++) {
  cout<<num<<" ";
  num=(num * 2) + 2;
  }
 
}
int main(){
    int terms;
    cout<<"Enter the number of terms you want to print: ";
    cin>>terms;
    sequence(terms);
   return 0;
}