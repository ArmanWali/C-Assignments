#include <iostream>
using namespace std; 
int main(){
    int length;
    cout<<"Enter the length of the square : ";
    cin>>length;
    for(int i=1; i<=length; i++){
        for (int j=1; j<=length; j++){
            if(i==1 || j==1 || i==length || j==length ){
                cout<<"* ";
            }
            else{cout<<"  ";
            }
        }
        cout<<endl;
    }
}