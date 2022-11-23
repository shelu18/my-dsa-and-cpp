#include<iostream>
using namespace std;

void merge(int arr1[],int n1,int arr2[],int n2){
	int l=n1+n2;
	int arr3[n1+n2];
	int i=0,j=0,count=0;
	while(i<n1){
	     while(j<n2){
	     	if(arr1[i]>arr2[j]){
	     		arr3[count]=arr1[i];
	     		count++;
	     		i++;
			 }else{
			 	arr3[count]=arr2[j];
			 	count++;
			 	j++;
			 }
		 }
	}
	
	for(int h=0;h<l;h++){
		cout<<arr3[h]<<" ";
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
