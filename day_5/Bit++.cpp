#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x=0;
    string str="";
    while(n--){
        cin>> str;
        if(str == "++X"|| str=="X++") ++x;
        else --x;
    }
    cout<<x;
 
}