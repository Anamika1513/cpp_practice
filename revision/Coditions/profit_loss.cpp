#include <iostream>
using namespace std;

int main(){
    int SP , CP ;
    cout<<"enter the value of selling price : ";
    cin>>SP;

    cout<<"enter the value of cost price : ";
    cin>>CP;

    if(SP>CP){
        cout<<"seller made the profit of rupees "<<SP-CP<<endl;
    }
    else if(CP>SP){
        cout<<"seller incurred the loss of rupees "<<CP-SP<<endl;
    }
    else{
        cout<<"seller neither made profitt nor incurred loss";
    }
}