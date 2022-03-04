p     i    n
a   l s  i g
y a   h r
p     i
numRows-i+imt-1
P   A   H   N  		//numRows = 3   imt = 1	//for 1st row numRows+imt
A P L S I I G		//for 2nd Row 2
Y   I   R		//for 3rd Row numRows+imt

P     I    N		//numRows = 4 	imt = 2 //for 1st row numRows+imt
A   L S  I G		//for 2nd Row 4
Y A   H R		//for 3rd Row 2
P     I			

P Y A I H R N
A P L S I I G

//int imt = numRows-2;

P     H     r		//numRows = 5 	imt = 3//for 1st row numRows+imt
A   S I   E Y
Y  I  R  v  M
P L   I G   U
A     N     C


1     9         17 //jmp = 8 8
2   8 10     16 18 //jmp = 6 2
3  7  11   15   19 //jmp = 4 4
4 6   12 14     20 //jmp = 2 6
5     13        21 //jmp = 8 8

1   5   9  //jmp = 4 4
2 4 6 8 10 //jmp =  2 2 2 2
3   7   11 //jmp = 4 4

1    7      13 //jmp = 6 6 6
2  6 8   12 14// jmp = 4 2 4 2
3 5  9 11   15//jmp = 2 4 2 4
4    10     16 // jmp = 6 6 6


class Solution {
public:
    string convert(string s, int numRows) {
        if(numrows == 1) return s;
		string result = "";
        int imt = numRows - 2;
		int strtjmp = numrows + imt;
		int cmptr = 0;
		for(int i=0;i<numRows;i++){
			int j = i;
			int cpy = 2;
			if(j==0||j==numRows-1){
				while(j<s.length()){
					result+=s[j];
					j+=strtjmp;
				}
			}
			else{
				int left = strtjmp-2*i;
				int right = strtjmp-left;'
				while(j<s.length()){
					result+=s[j];
					j+= (cpy%2==0)?left:right;
					cpy++;
				}
			}
		}
		return result;
		
    }
};

