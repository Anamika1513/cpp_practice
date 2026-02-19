#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter a no  : ";
    cin>>n;

    if(n<1000 && n>99){
        cout<<"the given no is three digit no";
    }
    else{
        cout<<"It is not a three digit no ";
    }
}