#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int count,n,maxElem,minElem;
    int maxFreq=0;
    cout<<"Enter no. of elements to be stored in array:";
    cin>>n;
    int arr[n],minFreq=n;
    map<int,int> m;

    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }

    for(auto it = m.begin(); it!=m.end();it++ ){
        if(it->second > maxFreq){
            maxFreq=it->second;
            maxElem=it->first;
        }
        if(it->second < minFreq){
            minFreq=it->second;
            minElem=it->first;
        } 
    }
    cout<<"Minimum Frequency = "<<minFreq<<" of element "<<minElem<<endl;
    cout<<"Maximum Frequency = "<<maxFreq<<" of element"<<maxElem;
    return 0;
}