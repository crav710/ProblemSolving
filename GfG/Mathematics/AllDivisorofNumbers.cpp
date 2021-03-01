#include <iostream>
using namespace std;


/*
approach 1)  iter from 1 ... n . Check if ith iter is dividing the n completely . 

approach 2) check for srt(n) and for each 1...sqrt(n) you will get a pair. 
approach 3) traverse till sqrt(n) and then traverse from sqrt(n) to 1 and print (n/i).

*/
void Divisors_app1(int n)
{
	for (int i = 1; i <=n; ++i)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
		}
	}

}
// does not print in order 
void Divisors_app2(int n)
{
	for (int i = 1; i*i<=n; ++i)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
			if(i!=n/i)
			{
				cout<<n/i;
			}


		}
	}
}
//  
void Divisors_app3(int n)
{
	int i;
	for (i = 1; i*i<n; ++i)
	{
		if(n%i==0)
		{
			cout<<i<<endl;		
		}
	}
	for (; i >=1 ; i--)
	{
		if(n%i==0)
		{
			cout<<n/i<<endl;

		}
	}

}

int main(int argc, char const *argv[])
{
	Divisors_app1(10);
	return 0;
}