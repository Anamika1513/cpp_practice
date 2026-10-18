#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
bool isIsomorphic(string s , string t){
    if(s.length()!=t.length()) return false ;

    vector<int> lastS(128 , -1);
    vector<int> lastT(128 , -1);

    for(int i=0 ; i<s.length() ; i++){
        if(lastS[s[i]]!=lastT[t[i]]) return false;
      
        lastS[s[i]] = i;
        lastT[t[i]] = i;
    }
    return true;
}

int main(){
    string s , t ;
    cin>>s >> t;

    bool res = isIsomorphic(s , t)  ? true:false;
    cout<<res<<endl;

    return 0;
}