#include<iostream>
using namespace std;
int main(){
       int n,m,a;
       cin>>n>>m>>a;

        // for length
        long long count_l=n/a;
        long long n1=n%a;
        if(  0<n1 && n1<a) count_l++;

        // for breadth
        long long count_b=m/a;
        long long n2=m%a;
        if(  0<n2 && n2<a) count_b++;

        long long result=count_b*count_l;
        cout<< result;


    return 0;
}