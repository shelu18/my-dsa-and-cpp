// pointers 
#include<iostream>
using namespace std;
int main(){
    float a=10.1;
    float *ptr = &a;
    cout<<ptr<<endl;  
    cout<<*ptr<<endl;// this is dereferencingit prints the value of a
                       //*ptr is basically return the value store at the address of ptr;
                       //chnge the value of x it will return the updated value
    a=20;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;     

   *ptr=77;
   cout<<"the new value pointed by by ptr" << *ptr<<endl ;                      //update the value using pointer 
   int store=*ptr;                       //we can alsoo store the value of *ptr in any anbother variable
cout<<"the same value may store in another variable " << store;
    return 0;
//sum of two numbers using pointer
//common mistakes in pointer
int z=5;
int *ptr=&z; 

// ptr =9; //this is wrong becaue ptr is a pointer and it can only store the address of the variable
*ptr=&z; //this is also wrong because *ptr is point to the value of stored at the afdva
}