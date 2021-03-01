#include <iostream>
using namespace std;


/*
approach 1)  iter from 1 ... n . Check if ith iter is prime or not if yes then check if that prime number contributes how many times.
by simply taking mod with n till the number completely divides it.
Approach 2) instead of 1...n do till 1...sqrt(n). Same logic we just need to find a prime number from factor pair. 
Approach 3) more optimisation by checking for 2 and 3 earlier. 
check for divisibility by 2 and then 3 and then next numbers i,i+2
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
void Primefactors_app2(int n)
{
	if(n<=1){
		return;
	}
	for(int i =2;i*i < n;i++)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}

	}
	if(n>1){
		cout<<n<<endl;
	}
}
void Primefactors_app3(int n)
{
	if(n<=1){
		return;
	}
	while(n%2==0)
	{
		cout<<2<<" "
		n=n/2;
	}
	while(n%3==0)
	{
		cout<<3<<" "
		n=n/3;
	}
	for(int i =5;i*i < n;i=i+6)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
		while(n%(i+2)==0)
		{
			cout<<i+2<<" ";
			n=n/i+2;
		}

	}
	if(n>3){
		cout<<n<<endl;
	}
}

void Primefactors_app1(int n)
{

	for(int i =2;i<n;i++)
	{
		if(isPrime_app3(i))
		{
			int x =i;
			while(n%x==0)
			{
				cout<<i<<" ";
				x=x*i;
			}

		}
	}
}
int main(int argc, char const *argv[])
{
	cout<<Primefactors_app1(10)<<endl;
	return 0;
}