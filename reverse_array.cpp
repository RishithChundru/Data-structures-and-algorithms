#include<bits/stdc++.h>
using namespace std;
/*
void f(int i, int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
}
*/
bool f(int i, string &s){
    if(i>=s.size()/2) return true;
    if(tolower(s[i])!=tolower(s[s.size()-i-1])) return false;
    return f(i+1, s);
}
int main(){
    string s="Madam";
    cout<<f(0,s);
}