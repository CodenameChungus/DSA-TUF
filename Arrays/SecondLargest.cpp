#include<iostream>
using namespace std;

int second_largest(int arr[],int n){
    int l = arr[0];
    int sl = -1;
    for(int i = 1;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]<l && arr[i]>sl){
            sl = arr[i];
        }
    }
    return sl;
}

int main(){
    int n,sl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<second_largest(arr,n);
    return 0;
}