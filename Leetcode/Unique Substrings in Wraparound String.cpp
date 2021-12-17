
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findSubstringInWraproundString(string p) {
        
    int cnt=0;
    int idx=0;
    char prev=p[0];
    map<char,int> umap;
    for(int i=1;i<p.size();i++){
        if((prev!='z') || (p[i]!='a')){
            if((p[i]-prev)!=1){
                int sz=i-idx;
                while(sz>umap[p[idx]]){
                    cnt+=sz-umap[p[idx]];
                    umap[p[idx]]=sz;
                    idx+=1;
                    sz-=1;
                    if(idx==i){
                        break;
                        }
                    }
                  
                    idx=i;
                  
            }
        }
            
            prev=p[i];
    }
     
    int sz=p.size()-idx;
    while(sz>umap[p[idx]]){
        cnt+=sz-umap[p[idx]];
        umap[p[idx]]=sz;
        idx+=1;
        sz-=1;
        if(idx==p.size()){
            break;
        }
    }
        
    return cnt;
    
}

int main(){
    string s="abcd";
    int cnt=findSubstringInWraproundString(s);
    cout<<cnt;
    return 0;
}