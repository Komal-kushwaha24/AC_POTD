#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0) cout<<0<<endl;
        else{
            int config=1;
            if(n%4==0) config++;
          config+=(n-2)/4;
         cout<<config<<endl;
        }
    }

}