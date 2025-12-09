#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
     int temp=b;
     b=a%b;
     a=temp;
    }
     return a;
}
int main(){
     int t ;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int g=0,x;
         for(int i=1;i<=n;i++){
          cin>>x;
          g=gcd(g,abs(i-x));
           }
         
        cout<<g<<endl; 
     }
    return 0;
}