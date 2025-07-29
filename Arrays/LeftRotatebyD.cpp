#include<iostream>
using namespace std;

void L_rotate(int arr[], int D, int n){
    int d = D%n;
    int temp[d];
    for (int i  = 0; i<d; i++){
        temp[i] = arr[i];
    }
    for(int i = d;i<n;i++ ){
        arr[i-d]=arr[i];
    }
    for(int i = 0;i<d;i++){
        arr[n-d+i]=temp[i];
    }

}

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    L_rotate(arr,39,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}