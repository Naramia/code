#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // added the two lines below for a fast IO program
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // int n=1;
    ll N,a,b,curr;
    
    cin>>N>>a>>b;
    ll lcm = a*b / __gcd(a,b);
    ll len_per_lcm = (lcm/a) + (lcm / b) - 1;
    ll lcm_cnt = N / len_per_lcm;
    ll cur = lcm_cnt * lcm;
    ll n = len_per_lcm * lcm_cnt;

    ll next_a = curr+a;
    ll next_b = curr+b;
    // if(a<b){
    //     curr=a;
    //     next_a = curr+a;
    //     // next_b = b;
    // }
    // else if(b<a){
    //     curr = b;
    //     next_b = curr + b;
    //     // next_a = a;
    //     }
    for(int i=1; i<=N; i++){
        if(next_a < next_b){
            curr = next_a;
            next_a += a;
        }
        if(next_a > next_b){
            curr = next_b;
            next_b += b;
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