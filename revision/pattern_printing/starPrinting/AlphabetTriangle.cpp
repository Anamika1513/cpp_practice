#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of rows : ";
    cin>>n;

    // int m;
    // cout<<"enter the value of column : ";
    // cin>>m;
    
    int sum = 0 ;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<char(j+64);
       }
       cout<<endl;
    }
    return 0;
}