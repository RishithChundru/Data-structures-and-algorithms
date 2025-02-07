#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=6;
    string ans="" ;
    while(a>0){ 
        ans+=to_string(a%2);
        a=a/2;
    }
    int i=0;
    int j=ans.size()-1;
    while(i<j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
    cout<<ans;
}