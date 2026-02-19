#include <iostream>
#include <vector>
using namespace std;

void sortZeroesAndOnce(vector <int> &v){
    int zeroes_count = 0;

    for(int ele:v){
        if(ele==0){
            zeroes_count++;
        }
    }
    for(int i=0; i<v.size();i++);
}
int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    sortZeroesAndOnce(v);

    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}