#include <iostream>
#include <vector>
#include <string>
using namespace std;

string countSort(string str){
    int n = str.length();
    vector<int> freq(26,0);

    //storing frequency of every character
    for(int i=0 ; i<n;i++){
        int index = str[i]-'a';
        freq[index]++;
    }

    //create our sorted array
    int j=0;
    for(int i=0; i<26 ;i++){
        while(freq[i]>0){
            str[j] = i+'a';
            j++;
            freq[i]--;
        }
    }
    return str;
}
int main(){
    string str;
    cin>>str;

    cout<<countSort(str)<<endl;

    return 0;
}
