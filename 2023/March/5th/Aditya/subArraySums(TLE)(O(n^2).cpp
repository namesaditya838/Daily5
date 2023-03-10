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
    
    int sum=0;
    int counter = 0;
    
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum = sum + arr[j];
            if(sum==x){
                counter++;
            }
        }
    }
    
    cout<<counter;
    
    return 0;
}