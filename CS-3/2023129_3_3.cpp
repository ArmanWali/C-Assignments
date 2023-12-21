#include <iostream>
using namespace std; 
bool prime(int num){
    if(num<=1){
        return false;
    }
    for( int i=2; i<num; i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}
void primenums(int start, int end){
    cout<<"Prime numbers between "<<start<<" and "<<end<<" are : "<<endl;
    for( int i=start; i<=end; i++){
        if (prime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int start, end;
    cout<<"Enter the starting number: ";
    cin>>start;
    cout<<"Enter the ending number: ";
    cin>>end;
    primenums(start,end);
    return 0;

}