#include<iostream>

using namespace std;

int main(){

    int i,n,lastdigit,firstdigit,sum;

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
     
    sum =firstdigit +lastdigit;
    (sum < 0) ? sum=-sum : sum=sum;
    cout <<"Sum of first and last digit is " << sum;


}