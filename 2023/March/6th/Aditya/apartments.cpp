//apartments
//https://cses.fi/problemset/task/1084/

#include <bits/stdc++.h>
using namespace std;
#define int long long

main(){
    
    int n,m,k;
    cin>>n>>m>>k;
    int size[n];
    for(int i=0;i<n;i++){
        cin>>size[i];
    }
    
    int apt[m];
    for(int i=0;i<m;i++){
        cin>>apt[i];
    }
    
    set<int> ppl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(apt[j]<=size[i]+k && apt[j]>=size[i]-k){
                ppl.insert(j);
            }
        }
    }
    
    cout<<ppl.size();
    
    return 0;
}
