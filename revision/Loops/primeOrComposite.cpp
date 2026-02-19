#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    bool x = true; //true means prime
    for(int i=2; i<=n/2 ; i++){
        if(n%i==0){
            x = false; //false means composite
            break; //to get out of the loop 
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    else if(x==true) cout<<"prime";
    else cout<<"composite";

}