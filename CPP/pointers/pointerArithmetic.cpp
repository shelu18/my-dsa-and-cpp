#include<iostream>
using namespace std;
int main (){
    int a=10;
    int *ptr=&a;
     //10
                        //increment operator on pointer 
    cout<<ptr<<endl;   //it will return the address of a 
    cout<<ptr+1<<endl;   //it will return next address of and difference betweeen a and next is equivalent to size of data type that is 4 for int 
}
