#include <iostream>
using namespace std;

/*
Approach 1) take max of a and b and keep increamenting till it divides both number completely.

Approach 2) lcm(a,b)= a*b / gcd(a,b)

*/

int GcdApproach_3(int a,int b)
{
	if(b==0){
		return a;
	}
	return GcdApproach_3(b,a%b);

}
int LcmApproach_2(int a,int b)
{
	return (a*b)/(GcdApproach_3(a,b));
}

int LcmApproach_1(int a,int b)
{
	int res = max(a,b);
	while(true)
	{
		if(a%res==0 && b%res == 0)
		{
			break;
		}
		res++;
	}
	return res;


}
int main(int argc, char const *argv[])
{
	cout<<LcmApproach_1(10,9)<<endl;

	return 0;
}