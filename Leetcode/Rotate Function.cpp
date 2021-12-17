#Time complexity:O(n)
#problem code: 396 (https://leetcode.com/problems/rotate-function/)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxRotateFunction(vector<int>& nums) {
       int sum=0;
       int presum=0; 
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           presum+=(i*nums[i]);
       }
        int mx=presum;
        for(int i=nums.size()-1;i>=0;i--){
            presum=presum+sum-(nums[i]*nums.size());
            mx=max(mx,presum);
        }
         return mx;
  }

int main(){
  vector<int> nums{4,3,2,6};
 
  int max_value=maxRotateFunction(nums);
  
  cout<<max_value;
  cout<<"\n";
  return 0;
}