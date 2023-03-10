//https://cses.fi/problemset/task/1660

#include <bits/stdc++.h>
using namespace std;


int main(){
    int x,n;
    cin>>n>>x;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sum;
    int counter = 0;
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            sum = 0;
            for(int k=j;k<j+i;k++){
                sum = sum +arr[k];
            }
            if(sum==x){
                counter++;
            }
        }
    }
    
    cout<<counter;
    
    return 0;
}