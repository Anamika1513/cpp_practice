#include <iostream>
using namespace std;

int main(){
    int a[3][3] , b[3][3] , c[3][3];

     cout<<"Enter the value of first matrix : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<endl;

    cout<<"Enter the value of second matrix";
    cout<<a[3][3];

    cout<<"the value of second matrix : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
cout<<endl;
    cout<<" the value of first matrix";
    cout<<b[3][3];

    cout<<"the resultant matrix \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< a[i][j] + b[i][j] ;
        }
    }
    cout<<" the value of resultant matrix is : ";
    cout<<c[3][3];

    return 0;
}