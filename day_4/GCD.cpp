#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,place,x;
    cin >> n >> place;
    
    vector<int>scores(n);
    for(int i=0;i<n;i++){
       cin >> scores[i];
    }
   
    int advance=0;
    int finisherScore=scores[place-1];
    for(int i=0;i<scores.size();i++) {
        if(scores[i] >=finisherScore && scores[i]>0) advance++;
    }
    cout << advance;
}