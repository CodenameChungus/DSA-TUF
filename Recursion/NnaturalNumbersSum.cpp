#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter value of n: ";
    cin >> n;
    int SumOfNaturalNumbers(int);
    sum = SumOfNaturalNumbers(n);
    cout<<"Sum = "<<sum;
    return 0;
}
int SumOfNaturalNumbers(int n){
    if(n>0){
        return n+SumOfNaturalNumbers(n-1);
    }
    else{
    return 0;
    }
}
