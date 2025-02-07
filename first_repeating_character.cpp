/*
Given a string s. The task is to find the first repeated character in it. We need to find the character that occurs more than once and whose index of second occurrence is smallest. s contains only lowercase letters.

Examples :

Input: s ="geeksforgeeks"
Output: "e"
Explanation: 'e' repeats at third position.
Input: s ="hellogeeks"
Output: "l"
Explanation: 'l' repeats at fourth position.
Input: s ="abc"
Output: "-1"
Explanation: There is no repeated character.
*/

#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s) {
    // code here.
    int checker=0;
    string ans="-1";
    for(char ch: s){
        int bitIndex=ch-'a';
        if((checker&(1<<bitIndex))>0){
            ans=ch;
            break;
        }
        checker=checker|(1<<bitIndex);
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    cout<<firstRepChar(s);
}