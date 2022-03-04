class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num = 0;
        for(auto c: columnTitle)
            num = num * 26 + (c - 'A' + 1);

        return num;
    }
};