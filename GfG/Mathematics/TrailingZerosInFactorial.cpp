#include <iostream>
using namespace std;

/*
You need to think what is contributing to zeros and how much? 
zeros = n/5,n/5^2,n/5^3 .... till 5^k<n.
O(logn)
*/

int countTrailingZeros(int n)
{
	int divisor=5;
	int zeros=0;
	while(divisor<=n)
	{
		zeros=zeros+(n/divisor);
		divisor=divisor*5;
	}
	return zeros;
}
int main(int argc, char const *argv[])
{
	cout<<countTrailingZeros(100)<<endl;
	return 0;
}