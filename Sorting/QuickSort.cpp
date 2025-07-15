#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int left, int right){
    int pivot = arr[left];
    int indexini = left+1;
    for(int i = left+1;i<=right;i++){
        if(arr[i]<pivot){
            swap(arr[indexini],arr[i]);
            indexini+=1;
        }
    }
    swap(arr[left],arr[indexini-1]);
    return indexini-1;
}

    void quick_sort(vector<int> &arr,int left, int right){
        if(left<right){
            int pi = partition(arr,left,right);
            quick_sort(arr,left,pi-1);
            quick_sort(arr,pi+1,right);
        }
    }

    int main(){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i = 0;i<n;i++){
            int input;
            cin>>input;
            arr.push_back(input);
        }
        quick_sort(arr,0,n-1);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }



