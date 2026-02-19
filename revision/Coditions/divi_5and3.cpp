#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter a no  : ";
    cin>>n;

    if(n%5==0 && n%3==0){
        cout<<"the given no is divisible by 3 and 5 both";
    }
    else{
        cout<<"not divisible by 3 and 5 ";
    }
}