#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v ;
    for(int i=0 ; i<6;i++){
        int x;
        cin>>x;

        v.push_back(x);
    }

    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter no : ";
    int num , count =0;
    cin>>num;

    for(int i=0 ; i<v.size();i++){
        if(v[i]==num){
            count++;
        }
    }
    cout<<"no of occurrence : "<<count;
    
    return 0;
}