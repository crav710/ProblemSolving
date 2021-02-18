#include <iostream>
using namespace std;



/*
Works well if the array is given. If only number is given then you need to find reverse of digit and compare if reverse is same as the number then it is a pallindrome. 
*/
bool isPallindrome(int arr[],int n)
{

	int start=0;
	int end = n-1;
	bool ispall=true;
	while(start < end )
	{
		if(arr[start]==arr[end])
		{
			start++;
			end--;

		}
		else
		{
			ispall=false;
			break;
		}
	}
	return ispall;
}

bool isPallindrome(int n)
{
	int orgnal=n;
	int rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	// cout<<rev<<orgnal<<endl;
	if(rev==orgnal)
	{
		return true;
	}
	return false;

}


int main(int argc, char const *argv[])
{
	int arr[]={1,2,3,2,1};
	cout<<isPallindrome(232)<<endl;
	return 0;
}

