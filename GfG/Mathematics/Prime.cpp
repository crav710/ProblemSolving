#include <iostream>
using namespace std;


/*
approach 1) We check that from 1...n if more than 1 divided the number than it is not prime. 
1 2 3 4 5 6 7 8 9 10  
Approach 2) We just need to check till Sqrt(n). Why ? Because there would exist a number which is square of n-1,n-2 beyond sqrt(n).
That would be repeatitive.
Divisors always appear in pair. 
let's say 
x*y = n 
then if x<=y
x*x<=n
x<=sqrt(n)

Approach (3) Now add two more checks to reduce the time complexity 



*/

bool isPrime_app1(int n)
{
	bool isprime=true;
	for(int i =2 ;i<n;i++)
	{
		if(n%i==0)
		{
			isprime=false;
			break;

		}
	}
	return	isprime;
}

bool isPrime_app2(int n)
{
	bool isprime=true;
	for(int i =2 ;i*i<n;i++)
	{
		if(n%i==0)
		{
			isprime=false;
			break;

		}
	}
	return	isprime;



}
bool isPrime_app3(int n)
{
	bool isprime=true;
	if(n==1)
	{
		return false;
	}
	if(n==2 || n==3)
	{
		return true;
	}
	if(n%2==0 || n%3==0)
	{
		return false;
	}
	for(int i =5 ;i*i<n;i=i+6)
	{
		if(n%i==0 || n%(i+2)==0)
		{
			isprime=false;
			break;

		}
	}
	return	isprime;
}

int main(int argc, char const *argv[])
{
	cout<<isPrime_app1(10)<<endl;

	return 0;
}