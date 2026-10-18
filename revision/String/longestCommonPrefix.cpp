#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string> &str ){
    sort(str.begin() , str.end());

    string s = str[0];
    int i=0;
    string t = str[str.size()-1];
    int j=0;

    string ans="";
    while(i<s.size() && t.size()){
        if(s[i]==t[i]){
            ans+=s[i];
            i++; j++;
        }
        else break;
    }

    return ans;

}

int main(){
    int n;
    cout<<"Enter the no of strings : ";
    cin>>n ;

    vector<string> str(n);
    cout<<"Enter strings : ";
    for(int i=0 ; i<n ; i++) cin>>str[i];

    cout<<"Longest Common String "<<endl;

    cout<<longestCommonPrefix(str)<<endl;

    return 0;
}