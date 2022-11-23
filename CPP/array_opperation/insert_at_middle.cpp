#include<iostream>
using namespace std;

void merge(int arr1[],int n1,int arr2[],int n2){
	int arr3[n1+n2];
	int l=n1+n2;
	for(int i=0;i<n1;i++){
	     arr3[i]=arr1[i];	
	}
	for(int i=n1;i<l;i++){
		arr3[i]=arr2[i-n1];
	}
	for(int i=0;i<l;i++){
		cout<<arr3[i]<<" ";
	}
}
int main(){
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    
    merge(arr1,n1,arr2,n2);
    
   return 0; 
}
