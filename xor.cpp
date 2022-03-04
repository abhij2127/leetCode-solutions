#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
//Sieve of Eratosthanes is a algorithm for finding all prime numbers upto n efficiently
/*  -------****Algorithm******-------
1. Make a list of size n say m[0..n];
2. Initialize all the instances as true;
3. start marking from 2;
3. 
*/
bool prime[1000000];
void SieveOfEratosthenes(int n){
	
	memset(prime,true,sizeof(prime));
	for( int p=2;p<n;p++){
		
		if(prime[p]==true){
			for(int i=p*p;i<=n;i+=p){
				prime[i] = false;
			}
		}
	}
	
	
}
int sol(int n){
	int xorVal = 0;
	for(int i=2;i<n;i++){
		if(prime[i]){
			xorVal^=i;
		}
	}
	return xorVal;
}
int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0) exit(0);
		SieveOfEratosthenes(n);
		cout<<sol(n)<<endl;
	}
}




