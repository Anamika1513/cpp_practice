#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of an array : ";
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int count_even = 0 , count_odd = 0 ; 
    
    for( int i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            count_even++;
        }
        
        else{
            count_odd++;
        }
    }
    cout << "Total Even numbers: " << count_even << endl;
    cout << "Total Odd numbers: " << count_odd << endl;    

    return 0 ;
} 