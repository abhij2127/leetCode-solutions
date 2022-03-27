#include<bits/stdc++.h>

    bool isValid(string s) {
        if(s.length()==1) return false;
        stack<char> st;
        for(auto c : s){
            if(c==')' && st.top()!='(')
                return false;
            else if(c==')' && st.top()=='(')
                st.pop();
            
            if(c==']' && st.top()!='[')
                return false;
             else if(c==']' && st.top()=='[')
                st.pop();
            
            if(c=='}' && st.top()!='{')
                return false;
             else if(c=='}' && st.top()=='{')
                st.pop();
                 
             if(c=='(' || c=='{' || c=='[')
                 st.push(c);
        }
        if(!st.empty()) return false;
        return true;
    }
int main(){
	stack<int> mystack;
	mystack.push('c');
	int i = mystack.top();
	mystack.pop();
	int j = mystack.top();

