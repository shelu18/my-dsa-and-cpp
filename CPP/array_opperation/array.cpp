#include<iostream>
using namespace std;

void insert(int arr[],int n){
	
	for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    insert( arr,n);
    
   return 0; 
}
