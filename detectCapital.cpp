#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
		
        int ctr = word.length();
        if(ctr==1) return true;
        if(!isupper(word[0])){
			
            for(char c: word){
				
                if(isupper(c)) return false;
            }
        }
        else{
            if(!isupper(word[1])){
			
			int i=0;
                for(char c: word){
					
                    if(i!=0&&isupper(c)) return false;
					i++;
                }
            }
            else{
				
                for(char c : word){
					
                    if(!isupper(c)) return false;
                }
            }
        }
        return true;
    }
};

int main(){
	Solution s;
	cout<<endl<<s.detectCapitalUse("abhishek")<<endl;
	cout<<endl<<s.detectCapitalUse("ABHISHEK")<<endl;
	cout<<endl<<s.detectCapitalUse("Abhishek")<<endl;
	cout<<endl<<s.detectCapitalUse("AbhiHhek")<<endl;
	cout<<endl<<s.detectCapitalUse("ABhishek")<<endl;
	cout<<endl<<s.detectCapitalUse("abhiShek")<<endl;
}