#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    string s;
    int res;
    cin>>s;
    try{
        res = stoi(s);
    }
    catch(...){
        res = -1;
    }
    cout<<res;
    return 0;
}
