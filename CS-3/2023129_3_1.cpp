#include <iostream>
using namespace std;

void table(int tableNum, int start, int end){
   for(int i=start; i<=end; i++)
   cout<<tableNum<<" X "<<i<<" = "<<tableNum*i<<endl;
}

int main(){
    int tableNum,start,end;
    cout<<"Enter the the number you want to print the table of : ";
    cin>>tableNum; 
    cout<<"Enter the starting number of the table : ";
    cin>>start;
    cout<<"Enter the ending number of the  table: ";
    cin>>end;
    table(tableNum,start,end);

}