#include<iostream>
#include<vector>
using namespace std;

vector<int> movezeroes(vector<int> arr,int n){
    int j=-1;
    for(int i  = 0; i<n; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    
    if(j==-1){
        return arr;
    }

    for(int i = j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){
    vector<int> arr;
    cout<<"Enter number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    arr = movezeroes(arr,n);
    cout<<"After moving zeroes: ";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}