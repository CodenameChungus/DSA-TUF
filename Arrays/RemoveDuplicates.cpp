#include<iostream>
using namespace std;

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

int remove_duplicate(int arr[], int n){
    int left = 0;
    for(int i = 1;i<n;i++){
        if(arr[i]!=arr[left]){
            arr[left+1]=arr[i];
            left++;
        }
    }
    return left+1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    int newsize = remove_duplicate(arr,n);
    for(int i=0;i<newsize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}