#include<bits/stdc++.h>
using namespace std;

vector<int> union_array(vector<int> arr1,vector<int> arr2, int m, int n){
    int i = 0,j=0;
    vector<int> union_arr;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            if(union_arr.size()==0 || union_arr.back()!=arr1[i]){
                union_arr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(union_arr.size()==0 || union_arr.back()!=arr2[j]){
                union_arr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<m){
            if(union_arr.size()==0 || union_arr.back()!=arr1[i]){
                union_arr.push_back(arr1[i]);
            }
            i++;
    }
    while(j<n){
            if(union_arr.size()==0 || union_arr.back()!=arr2[j]){
                union_arr.push_back(arr2[j]);
            }
            j++;
        }
    return union_arr;
    }


int main (){
    vector<int> arr1,arr2,union_arr;
    int m,n;
    cout<<"Enter number of elements of array1: ";
    cin>>m;
    cout<<"Enter elements of array1: ";
    for(int i = 0;i <m;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    cout<<"Enter number of elements of array2:";
    cin>>n;
    cout<<"Enter elements of array2: ";
    for(int i = 0;i <m;i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    union_arr = union_array(arr1,arr2,m,n);
    for(int i = 0;i<union_arr.size();i++){
        cout<<union_arr[i]<<" ";
    }
    return 0;
}