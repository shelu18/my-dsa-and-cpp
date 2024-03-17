#include<iostream>
using namespace std;
int main(){
    int arr[2]={10,20};
    int *ptr=&arr[1];
    cout<<ptr<<endl;   //it will return the address of a
cout<<(*ptr) <<endl;   //it will return the value store at the address where the ptr is pointing to.
cout<<(*ptr)++ <<endl;




}