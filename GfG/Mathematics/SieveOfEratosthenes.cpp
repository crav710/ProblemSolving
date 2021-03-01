#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
approach 1)  check for all 1...n if n is prime or not.
approach 2)  make a boolean array isPrime[n+1] mark  multiples of 2,3,5 as false rest is your prime. 
approach 3)  optimised code .

O(nloglogn)
*/

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
	for(int i =5 ;i*i<=n;i=i+6)
	{
		if(n%i==0 || n%(i+2)==0)
		{
			isprime=false;
			break;

		}
	}
	return	isprime;
}

void Sieve_app1(int n)
{
	for (int i = 2; i < n; ++i)
	{
		if(isPrime_app3(i)){
			cout<<i<<"";
		}
	}
}
void Sieve_app3(int n)
{
	std::vector<bool> isPrime(n+1,true);
	for (int i = 2; i*i < n; ++i)
	{
		if(isPrime[i])
		{
			for(int j=2*i;j<n;j=j+1)
			{
				isPrime[j] = false;
			}
		}
	}
	for (int i = 2; i < n; ++i)
	{	
		if(isPrime[i]){
			cout<<i<<" ";		
		}
	}
}
// more optimisation by using j = i*i.
void Sieve_app4(int n)
{
	std::vector<bool> isPrime(n+1,true);
	for (int i = 2; i < n; ++i)
	{
		if(isPrime[i])
		{
			cout<<i<<" ";
			for(int j=i*i;j<n;j=j+1)
			{
				isPrime[j] = false;
			}
		}
	}
}

void Sieve_app2(int n)
{
	bool isPrime[n+1];
	isPrime[0]=false;
	isPrime[1]=false;
	for (int i = 2; i <=n; ++i)
	{
		isPrime[i]=true;
	}
	for (int i = 2; i <n ; ++i)
	{
		int multi2= 2*i;
		if(multi2>n)
		{
			break;
		}
		isPrime[multi2] = false;
	}
	for (int i = 3; i <n ; ++i)
	{
		int multi2= 3*i;
		if(multi2>n)
		{
			break;
		}
		isPrime[multi2] = false;
	}
	for (int i = 5; i <n ; ++i)
	{
		int multi2= 5*i;
		if(multi2>n)
		{
			break;
		}
		isPrime[multi2] = false;
	}

	for (int i = 2; i < n; ++i)
	{
		if(isPrime[i]==true)
		{
			cout<<i<<" ";
		}

	}
}

int main(int argc, char const *argv[])
{
	Sieve_app2(10);
	return 0;
}