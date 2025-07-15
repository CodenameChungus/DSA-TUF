    #include<bits/stdc++.h>
    #include<iostream>
    using namespace std;

    void mergefunc(vector<int> &arr,int low,int mid, int high){
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=0;i<temp.size();i++){
            arr[low+i]=temp[i];
        }
    }

    void merge_sort(vector<int> &arr,int low,int high){
        if(low>=high) return;
        int mid = (low + high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        mergefunc(arr,low,mid,high);
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
        merge_sort(arr,0,n-1);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }
