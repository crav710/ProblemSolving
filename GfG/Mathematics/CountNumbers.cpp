#include <iostream>
using namespace std;
/*
Input   :: n 
Output  :: Count of digits  
*/


int countDigitRecursive(int n)
{
	if (n==0)
	{
		return 0;
	}
	return 1+countDigitRecursive(n/10);
}

int countDigitIterative(int n)
{
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	return count;
}

int countDigitBest(int n)
{
	return floor(log(n)+1);

}
int main()
{
	int number = 1234;
	cout<<countDigitIterative(number)<<endl;
	cout<<countDigitRecursive(number)<<endl;
}