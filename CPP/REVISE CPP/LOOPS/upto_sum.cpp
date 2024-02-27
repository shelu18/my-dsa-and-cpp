//sum no. 1 to 10

#include<iostream>
using namespace std;
int main (){
    cout<<"enter the number upto which you want to print the number";
    int n;
    cin>>n;
    int sum=0;
    for (int i=0;i<=n;i++){
        sum+=i;
        
    }
    cout<<"the sum of numbers upto"<<" "<<n<<"is"<<" "<<sum;
}