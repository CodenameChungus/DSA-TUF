#include<iostream>
using namespace std;

int main(){
    int n;
    void bubble_sort(int arr[],int);
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void bubble_sort(int arr[],int n){
    for(int i = n; i>0 ; i--){
        int flag = 0;
        for(int j = 0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        } 
    }
}