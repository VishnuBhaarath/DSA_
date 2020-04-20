#include<iostream>
using namespace std;
binarySearch(int arr[],int start,int size,int x){
	while(start<=size){
		int mid=start+(size-start)/2;
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid]<x){
			start=mid+1;
		}
		else if(arr[mid]>x){
			size=mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int x=7;
	int size= sizeof(arr)/sizeof(arr[0]);
	cout<<binarySearch(arr,0,size-1,x);
}
