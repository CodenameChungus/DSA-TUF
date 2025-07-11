#include<iostream>
using namespace std;

int main(){
    bool CheckPalindrome(int,int,char s[]);
    char str123[] = "abcba";
    int len = sizeof(str123)/sizeof(str123[0])-1;
    bool checkpal = CheckPalindrome(len,0,str123);
    cout << checkpal;
    return 0;
}
bool CheckPalindrome(int length,int i,char s[]){
    if(i>=length/2){
        return true;
    }
    if(s[i] != s[length-1-i]){    
        return false;
    }
    return CheckPalindrome(length,i+1,s);
}