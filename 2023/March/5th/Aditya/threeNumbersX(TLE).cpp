#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cin>>n>>x;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ind = 0,sum;
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                sum = arr[i]+arr[j]+arr[k];
                if(sum==x){
                   ind =1;
                   break;
                }
            }
            if(ind)
                break;
        
        }
        if(ind)
            break;
    }
    
    if(ind){
        cout<<i+1<<" "<<j+1<<" "<<k+1;
    }
    else{
        cout<<"IMPOSSIBLE";
    }
    
    return 0;
}