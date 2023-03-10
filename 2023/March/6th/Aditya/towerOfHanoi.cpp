//tower of hanoi

#include <bits/stdc++.h>
using namespace std;

void tower(int n, int from, int to, int inter){
    if(n==2){
        cout<<"\n"<<from<<" "<<inter;
        cout<<"\n"<<from<<" "<<to;
        cout<<"\n"<<inter<<" "<<to;
        return;
    }
    tower(n-1,from,inter,to);
    cout<<"\n"<<from<<" "<<to;
    tower(n-1,inter,to,from);
}


int main() {
    tower(4,1,3,2);

    return 0;
}