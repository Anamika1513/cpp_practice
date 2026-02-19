#include <iostream>
using namespace std;

class electricityFreCount{
    private:
    int n;
    int count_even , count_odd ; 
    int arr[50];

    public:

    void input(){
        cout<<"enter the size of an array : ";
        cin>>n;

        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }

        count_odd = 0 ; 
        count_even = 0 ;
    
    }

    void checkEvenOdd(){
        for( int i=0 ; i<n ; i++){
            if(arr[i] % 2 == 0){
                count_even++;
            }
            
            else{
                count_odd++;
            }
        }
    }

    void display(){
        cout << "Total Even numbers: " << count_even << endl;
        cout << "Total Odd numbers: " << count_odd << endl;    
    }  
};

int main(){
    electricityFreCount obj;
    obj.input();
    obj.checkEvenOdd();
    obj.display();

    return 0;
}

