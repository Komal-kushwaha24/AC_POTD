#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
    string str;
    cin>>str;
    int len=str.length();
    if(len<=3) cout<<"NO\n";
    else{
    unordered_map<char,int>m;
    bool isPal=true;
    for(char ch:str) m[ch]++;
    for( auto it:m){
        if(it.second == len-1 || it.second== len)
        { isPal=false;
            break;}
    }
    if(isPal==false) cout<<"NO\n";
    else cout<<"YES\n";
   }
    }
    return 0;
}
