#include <iostream>
using namespace std;
/*
approach 1)   multiple n with k times to get power .(problem :: overflows , slow )
approach 2)   pow(x,n)= if n is even 
						pow(x,n/2)*pow(x,n/2)
						else 
						pow(x,n-1)*x
approach 4) Iterative (Binary Exponensiation)
1) Every number can be written as sum of power of 2 (set bits in binary representation).
2) We can traverse through all bits of number (LSB to MSB) in O(logn) time.



*/
int pow_app1(int n)
{
	int res = 1;
	for (int i = 1; i < n; ++i)
	{
		res = res*i;
	}
	return res;
}
// with one function call.
int pow_app3(int x,int n)
{
	if(n==0){
		return 1;
	}
	int y=pow_app3(x,n/2);
	y=y*y;
	if(n%2==0)
	{
		return y;
	}
	else
	{
		return y*x;
	}


}
// my approach with two function call.
int pow_app2(int x,int n)
{
	if(n==0){
		return 1;
	}
	if(n==1)
	{
		return x*1;
	}
	if(n%2==0){
		int y=pow_app2(x,n/2);
		return y*y;
	}
	else{
		return pow_app2(x,n-1)*x;
	}

}
// use n&1 to optimise checking odd since or any oddnumber this is true .
// use shift operator for /2 . n>>1;
int pow_app4(int x,int n)
{
	int res =1 ;
	while(n>0)
	{
		if(n&1)
		{
			res=res*x;
		}
		n=n>>1;
		x=x*x;
	}
	return res;


}
int main(int argc, char const *argv[])
{
	cout<<pow_app4(2,10)<<endl;
	return 0;
}