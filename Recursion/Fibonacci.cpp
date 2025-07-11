#include<iostream>
using namespace std;

int main(){ 
    int n, fibonacci(int);
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int ls=fibonacci(n-1);
    int rs=fibonacci(n-2);
    return ls+rs;
}