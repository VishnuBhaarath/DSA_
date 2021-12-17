#include<bits/stdc++.h>
#include<iostream>
using namespace std;

 
long long int integerReplacement(long long int n) {
       if(n==1){
           return 0;
       } 
       if(n%2==0){
           return 1+integerReplacement(n/2);
       }
        else{
            
           
            return 1+min(integerReplacement(n-1),integerReplacement(n+1));
        }
        return -1;
 }

 int main(){
 	long long int val=integerReplacement(10);
 	cout<<val;
 	return 0;
 }