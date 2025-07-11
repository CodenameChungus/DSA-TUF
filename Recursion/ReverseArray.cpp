#include <iostream>
using namespace std;
int main(){
    void reverse(int,int arra[],int);
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    reverse(0,arr,length);
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
void reverse(int start,int arr[],int length){
    if(start>=length){
        return;
    }
    swap(arr[start],arr[length-1]);
    reverse(start+1,arr,length-1);
}