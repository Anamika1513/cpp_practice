#include <iostream>
using namespace std;

int main(){
    int x , y ;
    cout<<"enter the value of x : ";
    cin>>x;

    cout<<"enter the value of y: ";
    cin>>y;

    if(x==0){  
        if(y==0){
            cout<<"lie in origin";
        }
        else{ 
            cout<<"lie in quadrant";
        }
    }
    else  {   
        if(x>0){
            if(y>0){
                cout<<"lie in first quadrant";
            } 
            else{
                cout<<"lies in fourth quadrant";
            }
        }
        else{  
            if(y>0){
                cout<<"lies in 2nd quadrant";
            }
            else{
                cout<<"lies in third quadrant";
            }
        }
    }

}