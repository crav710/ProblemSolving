#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*

Idea here is to use binary search 


*/
void uniqueElement(int arr[],int low,int high)
{
	if (low>high)
	{
		return ;
	}
	if (low==high)
	{
		cout<<"required num :: "<<arr[low]<<endl;
		return;
	}
	int mid = (low+high)/2;

	if(mid%2==0)
	{
		if(arr[mid]==arr[mid+1])
		{
			uniqueElement(arr,mid+2,high);
		}
		else
		{
			uniqueElement(arr,low,mid);
		}
	}
	else
	{
		if (arr[mid]==arr[mid-1])
		{
			uniqueElement(arr,mid+1,high);
		}
		else
		{

			uniqueElement(arr,low,mid-1);			

		}

	}

}
int main(int argc, char const *argv[])
{
	int arr[] ={1,1,2,2,3,4,4,};
	int n= sizeof(arr)/sizeof(arr[0]);
	uniqueElement(arr,0,n-1);

}
