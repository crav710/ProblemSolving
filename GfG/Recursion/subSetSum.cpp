#include <iostream>
using namespace std;
/*
idea should be that you have a tree where the subset would add upto the sum let say any root to leaf path . 
*/


int  subSetSum(int arr[],int n,int sum)
{
	if(n==0)
	{	
		return (sum==0)?1:0;
	}
	return subSetSum(arr,n-1,sum) + subSetSum(arr,n-1,sum-arr[n-1]);
}

int main(int argc, char const *argv[])
{
	int size=3;
	int arr[size]={10,20,15};
	int sum = 25;
	cout<<subSetSum(arr,size,sum)<<endl;
	return 0;
}