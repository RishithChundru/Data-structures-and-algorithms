#include<bits/stdc++.h>
using namespace std;
void explainMultiMap(){
    // everything same as map, only it can store multiple keys.
    // only mpp[key] cannot be used here.
}

void explainUnorderedMap(){
    // same as set and unordered_Set difference.
}

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second> p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}


void explainExtra(){
    vector<int> a(5,3);
    int  n=5;
    sort(a,a+n);
    sort(a.begin(), v.end());

    sort(a+2,a+4);
    sort(a, a+n, greater<int>);

    pair<int,int> a[]={{1,2},{2,1},{4,1}};\

    // sort it according to second element.
    // if second element is same, then sort
    // it according to first element but in descending.

    sort(a, a+n, comp);

    int num=7;
    int cnt= __builtin_popcount();

    long long num=165786578687;
    int cnt= __builtin_popcount();

    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    int maxi=*max_element(a,a+n);
}