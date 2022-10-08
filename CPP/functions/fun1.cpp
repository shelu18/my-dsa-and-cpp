#include<iostream>
using namespace std;
int sum(int a,int b){

int c = a+b;
return c;
}//first we made sum function and take c in return we declare two variables in sum and be then call them by num1 and num2

int main ()
{
int num1,num2;

cout<<"enter first number"<<endl;
cin>>num1;

cout<<"enter second  number"<<endl;
cin>>num2;
 cout<<num1<< "+" <<num2<< "="<< sum(num1,num2);




}