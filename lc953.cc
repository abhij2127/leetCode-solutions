#include<bits/stdc++.h>

class Solution {
public:
    unordered_map<char,int> hmap;
    void fillmap(string &s){
        int i = 1;
        for(auto c : s){
            hmap[c] = i++;
        }
    }
    
    bool lex(string a, string b){
        int minL = min(a.length(),b.length());
        for(int k=0;k<minL;k++){
            if(hmap[a[k]]<hmap[b[k]]) return true;
            else if(hmap[a[k]]>hmap[b[k]]) return false;
            else continue;
        }
        if(a.length()==b.length())
            return true;
        else if(a.length()<b.length())
            return true;
        else return false;
    }
    
    bool isAlienSorted(vector<string>& words, string &order) {
        if(words.size()==1) return true;
        fillmap(order);
        for(int i=1;i<words.size();i++){
            int j = i-1;
            string a = words[j];
            string b = words[i];
            if(!lex(a,b)) return false;
        }
        return true;
    }
};