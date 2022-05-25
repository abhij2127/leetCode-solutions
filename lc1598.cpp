#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int fno = 0;
        for(auto s : logs){
            if(s=="../"){
                if(fno!=0)
                    fno--;
            }
            else if(s=="./"){
                continue;
            }
            else
                fno++;
        }
        return fno;
    }
};

int main(){
    vector<string> logs = {"./","../","./"};
    Solution s;
    int res = s.minOperations(logs);
    cout<<res<<endl;
}
