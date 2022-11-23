#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter size of arr1 : ";
    cin>>n1;
    int arr1[n1];
    cout<<"\n Enter elements of arr1 : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"\n Enter size of arr2 : ";
    cin>>n2;
    int arr2[n2];
    cout<<"\n Enter elements of arr2 : ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
	int arr3[n1+n2];
	int i=0,j=0,count=0;
	while(i<n1){
	     while(j<n2){
	     	if(arr1[i]<arr2[j]){
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
	
	for(int h=0;h<(n1+n2);h++){
		cout<<arr3[h]<<" ";
	}
    
    
   return 0; 
}

