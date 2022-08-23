#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int pertama, kedua;
   double sum;
   char opr;
   cin>>pertama>>opr>>kedua;
   if(opr == '+'){
    sum = pertama + kedua;
   }
   if(opr == '-'){
    sum = pertama - kedua;
   }
   if(opr == '/'){
    sum = (double)pertama/(double)kedua;
   }
   if(opr== '*'){
    sum = pertama * kedua;
   }
   if(opr == '%'){
      sum = pertama%kedua;
   }

   cout<<sum;

}