#include<iostream>
#include<string>
using namespace std;

string strFix(string &s){
    string output;
    for(auto it : s){
        if(it>='A' && it<='Z') output.push_back(it+32);
        else if(it>='a' && it<='z') output.push_back(it);
        else if(it>='0' && it<='9') output.push_back(it);
    }
    return output;
}

bool isPalindrome(string &s) {
    string output = strFix(s);
    int n = output.size();
    for(int i=0; i<n/2; i++){
        if(output[i]!=output[n-i-1]) return false;
    }
    return true;
}

int main(){
    string s;
    cout << "Enter string to be checked:" << endl;
    cin >> s;
    if(isPalindrome(s) == 1) cout << "The string is a palindrome";
    else cout << "The string is not a palindrome";
    return 0;
}