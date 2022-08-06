#include<iostream>
using namespace std;
int main(){
int number;
cout<<"Enter the number"<<endl;
cin>>number;
switch(number){
          case 1: cout<<" Today is a monday"<<endl;
          break;
          case 2: cout<<" Today is a tuesday"<<endl;
          break;
          case 3: cout<<"Today is a webseaday"<<endl;
          break;
          case 4: cout<<"Today is a thursady"<<endl;
          break;
          case 6: cout<<"Today is a firday"<<endl;
          break;
          case 7:cout<<"Today is a saturday"<<endl;
          break;
          default:cout<<"no case found"<<endl;
          }
}
