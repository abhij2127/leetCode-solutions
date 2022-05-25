#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void printStack(stack<char> s){
        if(s.empty()){
            cout<<"Empty\n";
            return;
        }
        int n = s.size();
        for(int i=0;i<n;i++){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(auto c : s){
            if(c=='#'&&!st1.empty())
                st1.pop();
            else if(c!='#'){
                st1.push(c);
            }
        }
        cout<<"Stack1 : ";
        printStack(st1);
        for(auto c : t){
            if(c=='#'&&!st2.empty())
                st2.pop();
            else if(c!='#'){
                st2.push(c);
            }
        }
        cout<<"Stack2 : ";
        printStack(st2);


        if(st1.empty() && st2.empty()) return true;
        else if(st1.empty() || st2.empty()) return false;
        else{
            while(!st1.empty()&&!st2.empty()){
                char a, b;
                a = st1.top();
                b = st2.top();
                if(a!=b) return false;
                st1.pop();st2.pop();
            }
            if(st1.empty()&&st2.empty()) return true;
            else return false;
        }

    }
};

int main(){
    string a = "y#fo##f";
    string b = "y#f#o##f";
    Solution s1;
    bool res = s1.backspaceCompare(a, b);
    if(res) cout<<"true";
    else cout<<"false";
    cout<<endl;
    return 0;
}

//"y#fo##f"
//"y#f#o##f"
