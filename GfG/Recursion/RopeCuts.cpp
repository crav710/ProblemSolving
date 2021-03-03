#include <iostream>
using namespace std;
/*

Think of this like you traverse from the sum and subtract a,b,c on each leaf and the do the same till you achieve sum 0.
Now find the max length in doing so.


*/
int  RopeCuts(int n,int a,int b,int c)
{
	if(n==0)
	{
		return 0;
	}
	if(n<0)
	{
		return -1;
	}
	int res = max(RopeCuts(n-a,a,b,c),max(RopeCuts(n-b,a,b,c),RopeCuts(n-c,a,b,c)));
	if(res == -1)
	{
		return -1;
	}
	return res+1;
}

int main(int argc, char const *argv[])
{
	cout<<RopeCuts(5,1,2,3)<<endl;
	return 0;
}