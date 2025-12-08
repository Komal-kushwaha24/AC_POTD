#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0,a;
        int count=0 ;
        int j=0;
        
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=abs(a);
            if(a == 0) continue;
            if(a<0) j++;
            if( a>0 && j>0){
                count++;
                 j=0;
        
           } 
   
        }
         if(j>0) count++;
        cout<<sum<<" "<<count<<endl;
    }
}