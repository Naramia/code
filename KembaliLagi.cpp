#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int pers,count,z;
    z=x;
    for(int i = 0; i<c; i++){
        pers=(a*z+b)%c;
        if(pers == x){
            count++;
            break;
        }
        else {
            count++;
        }
        z=pers;

    }
    cout<<count;
}