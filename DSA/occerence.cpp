
#include <iostream>

using namespace std;

  int firstocc(int arr[],int n, int key ){
    
    int s=0,e = n-1;
   
   int mid = s + (e-s)/2;
   int ans =-1; //initialise the answer by this
   
   while (s<=e){
       
      if ( arr[mid]==key ){
      ans=mid;
      e = mid-1; //left move karna he to mid-1;
     
      }
      else if(key > arr[mid]) { //key choti he to left move 
          e= mid + 1;
      }
      else if (key < arr [mid]){
                e = mid-n; 
                }            //agar key bada he to rigtt me move karega             
        mid =s+(e-s)/2;    //we need to udate the mid
    
   }
    return ans;
    
  
}

     int main(){
         
         int even[5]= {1,2,3,3,5};
         cout<<"first occurrenceof 3 is "<<firstocc(even,5,3)<<endl;
       
         return 0;
     }
