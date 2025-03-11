#include<iostream>

using namespace std;

int main(){
    
    int n,digit=0;

    cout << "Enter Any Number";
    cin >> n;

    if (n==0){

        cout <<"Enter number except 0";
        return 0;
    }

    while(n!=0)
    {
        n = n /10;
        digit++;
        
    }

    cout << digit;
    return 0;
}