#include<iostream>
using namespace std;

int main(){
    int n,f;
    int factorial(int);
    cout<<"Enter a number: ";
    cin>>n;
    f = factorial(n);
    cout<<"Factorial = "<< f;
    return 0;
}
int factorial(int n){
    if (n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}