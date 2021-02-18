#include <iostream>
using namespace std;

/*
Approach 1) Find minimum of two number (because GCD can never be greater than the min of two number). Now keep on decrementing
and check if it divided both the number. 
Approach 2) Euclidean Algorithm 
gcd(a,b)=gcd(a-b,b) b<a 
Approach 3)  Optimised version of Euclidean Algorithm
gcd(a,b)=gcd(b,a%b) 


*/

int GcdApproach_3(int a,int b)
{
	if(b==0){
		return a;
	}
	return GcdApproach_3(b,a%b);

}
int GcdApproach_2(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;

		}
		else{
			b=a-b;
		}

	}
	return a;

}
int GcdApproach_1(int a,int b)
{
	int res = min(a,b);
	while(res>0)
	{
		if(a%res==0 && b%res == 0)
		{
			break;
		}
		res--;
	}
	return res;
}


int main(int argc, char const *argv[])
{
	cout<<GcdApproach_1(10,9)<<endl;

	return 0;
}