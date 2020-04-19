#include <iostream>

using namespace std;
int search(int arr[],int x,int n){
    for(int i=0;i<n;i++){
        
        if(arr[i]==3){
            return i;
        }
       
    }
    return -1;
   
    
}
int main()
{
   int arr[]={1,2,3,4};
   int x=3;
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<""<<search(arr,x,n);
}
   
   
