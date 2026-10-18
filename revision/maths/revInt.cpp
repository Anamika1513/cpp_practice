#include <iostream>
#include <climits>
using namespace std;
int rev(int x) {
        
        int rev = 0;

        while(x!=0 ){
            int n = x%10;

            if (rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;

            rev = rev*10+n;
            x/=10;
        }
        return rev;
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;

    cout<< rev(a)<<endl;

    return 0;
} 
