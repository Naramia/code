#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // added the two lines below for a fast IO program
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // int n=1;
    ll N,a,b,curr;
    ll next_a, next_b;
    cin>>N>>a>>b;
    if(a<b){
        curr=a;
        next_a = curr+a;
        next_b = b;
    }
    else if(b<a){
        curr = b;
        next_b = curr + b;
        next_a = a;
        }
    for(int i=1; i<=N; i++){
        if(next_a < next_b){
            curr = next_a;
            next_a = curr + a;
        }
        if(next_a > next_b){
            curr = next_b;
            next_b = curr + b;
        }
        else {
            curr = next_a;
            next_a += a;
            next_b += b;
        }
        
    }
    cout<<curr<<"\n";
     return 0;
}