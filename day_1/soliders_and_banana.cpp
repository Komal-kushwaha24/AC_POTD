#include<iostream>
 using namespace std;
 int main(){
    int n,k,w;
    cin>>k>>n>>w;
    int have_to_buy=0;
    int total_pay=((w*(w+1))/2)*k;
    if(total_pay>=n)
    have_to_buy=total_pay-n;
    cout<<have_to_buy;
    return 0;
 
 }