#include <iostream>
using namespace std;
/*
Since factorial easily surpasses the UINT64 we need to use MOD here to get a result. However to calculate an accurate value for 100! factorial you require big data types. 

*/
#define MOD 1000000007

unsigned long long int getFactorial(unsigned long long int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return (n*getFactorial(n-1))%MOD;

}

int main(int argc, char const *argv[])
{
	unsigned long long int n=20;
	cout<<getFactorial(n)<<endl;

	return 0;
}