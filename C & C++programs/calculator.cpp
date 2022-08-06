#include<iostream>
using namespace std;
int main(){
int num1, num2;
cout<<"enter the two number"<<endl;
cin>>num1>>num2;
 char op;
 cout<<"enter any operator from + - * /"<<endl;
 cin>>op;
 switch(op){
 case '+': cout<<"addition"<<(num1+num2)<<endl;
            break;

 case '-': cout<<num1<<"-"<<num2<<"="<<(num1-num2)<<endl;
            break;
 case '*': cout<<"multiplication"<<(num1*num2)<<endl;
            break;
 case '/': cout<<"division"<<(num1/num2)<<endl;
             break;
  default: cout<<"kindly enter the proper value"<<endl;


 }
}

