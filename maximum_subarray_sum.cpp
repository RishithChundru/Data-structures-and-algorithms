#include<bits/stdc++.h>
using namespace std;
int maxsubsum(vector<int> nums){
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
       cin>>nums[i];
    }
    cout<<maxsubsum(nums);
}