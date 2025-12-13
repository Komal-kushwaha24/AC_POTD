#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        int x=0,count=0,minoper=0;
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2 != i%2){
                 count++;
                 if(x%2) odd++;
                 else even++;
                 }
        }
        if(count==0) cout<<0<<endl;
        else if(count%2==1) cout<<-1<<endl;
        else {
            if(odd==even ) cout<<count/2<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}
