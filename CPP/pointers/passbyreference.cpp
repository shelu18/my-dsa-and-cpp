#include<iostream>
using namespace std;
void  swap(int *a,int *b){
int temp= *a;
*a= *b;
*b= temp;

}
int main ()
{
    int a=10;
    int b=20;
    int *ptr=&a;
    int *ptr1=&b;
    swap(ptr,ptr1);
    cout<<a<<" "<<b;   //yaha per apan ne a or b ka address hold kiya pointer create kar ke then uske baad me function ne apan ne pointer pass kiya toh ek tarike se orignal value paas hui copy nahi 
}