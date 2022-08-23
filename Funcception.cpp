#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    while(x<y){
        cout<<x;
        x=a*x+b;
        cout<<endl;
    }
    return 0;
}