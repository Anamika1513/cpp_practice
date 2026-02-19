#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    
    int fact = 1 , ori_no = 0;
    for(int i=1;i<=n;i++){
        
        fact = fact*i;
       
        cout<<"the fact of "<<i<<" is : "<<fact<<endl;
    }
    
}