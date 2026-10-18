#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
    int original = n;
    int sum = 0;
    int count = 0;

    int temp = n;
    while(temp!=0){
        int digit = temp%10;
        count++;
        temp/=10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += round(pow(digit, count)); // or use a loop to multiply `digit` `digits` times
        temp /= 10;
    }

    return sum == original;

}

int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    if(isArmstrong(n)){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not a Armstrong number"<<endl;
    }
    return 0;
}