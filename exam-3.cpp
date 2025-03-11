#include<iostream>

using namespace std;

int main(){

    int i,n,lastdigit,firstdigit;

    cout << "Enter Any Number";

    cin >> n;

    if (n==0){

        cout <<"Enter number except 0" << endl;
        return 0;
    }

    lastdigit=n % 10;

    n = n / 10;

    while(n!=0){
        firstdigit= n %10;
        n = n /10;
    }

    cout <<"Sum of first and last digit is " << firstdigit +lastdigit;


}