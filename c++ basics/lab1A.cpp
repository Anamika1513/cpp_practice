#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter no of students : ";
    cin>>n;

    int roll[100];
    cout<<"Enter the roll no of student : \n";
    for(int i=0;i<n;i++){
        cin>>roll[i];
    }

    int searchRoll;
    cout<<"Enter the roll no for check : ";
    cin>>searchRoll;

    bool found = false;

    for(int i =0; i<n;i++){
        if (roll[i]==searchRoll){
            found = true;
            cout<<"student with roll no "<< searchRoll<<" is enrolled.";
            break;
        }   
    }
    if(!found){
        cout<<"student with roll no "<<searchRoll<<" is not enrolled.";
    }

    return 0;
}