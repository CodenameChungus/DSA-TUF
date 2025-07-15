#include<iostream>
using namespace std;

int main(){
    int n;
    void selection_sort(int arr[],int);
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void selection_sort(int arr[], int n){
    for(int i = 0; i<=n-2 ; i++){
        int index=i;
        for(int j = i+1; j<=n-1;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
   
    }
}