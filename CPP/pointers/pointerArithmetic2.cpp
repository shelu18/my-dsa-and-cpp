#include<iostream>
using namespace std;
int main(){
    int arr[2]={10,20};
    int *ptr=&arr[0];
    //cout<<ptr<<" "<<arr;  //it will both return same address as both are pointing to the same address.
    //cout<<*ptr<<" "<<*arr;  //both will return same value as both are pointing to the same address.and holds same value on dereferencing.
  cout<<*ptr+1<<" "<< *arr+1;    //increment bhi kar rha he pointer ki tarah 
}
