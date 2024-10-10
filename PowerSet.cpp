#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int n=0;n<=pow(2,s.size())-1;n++){
        string sub="";
        for(int i=0;i<=n-1;i++){
            if(n&(1<<i)){
                sub+=s[i];
            }
        }
        cout<<sub<<" ";
    }
}