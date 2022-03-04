#include<iostream>
#include<cstring>
//Time limit exceeding
//needs to be optimized


using namespace std;

bool is_palindrome(string s){
        int l=0,h=s.length()-1;
        while(l<h){
            if(s[l++]!=s[h--]) return false;
        }
        return true;
}
    string longestPalindrome(string s) {
        if(s.length()==1||s.length()==2) return s;
        int n = s.length();
        int mx = 0,start=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(is_palindrome(s.substr(i,j-i+1))&&s.substr(i,j-i+1).length()>mx){
                    start = i;
                    mx=s.substr(i,j-i+1).length();
                }
            }
        }
        return s.substr(start,mx);
    }

int main(){
 string s = "abcdbbfcba";
 cout<<longestPalindrome(s);
return 0;
}
