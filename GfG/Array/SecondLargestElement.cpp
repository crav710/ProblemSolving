#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
/*


*/
int largestElementApp1(int arr[],int n)
{
	int maxi=INT_MIN;
	int maxiIndex=0;
	for (int i = 0; i <n; ++i)
	{
		if(maxi < arr[i])
		{
			maxi = arr[i];
			maxiIndex = i;
		}
	}
	return maxiIndex;
}

//Basic traverse two time 
int SecondLargestElement(int arr[],int n)
{
	int maxi=largestElementApp1(arr,n);
	int res=-1;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]!=arr[maxi])
		{
			if(res==-1)
			{
				res=i;
			}
			else if(arr[res]<arr[i])
			{
				res=i;
			}

		}
	}
	return res;
}
// In one traversal 
// Idea is to keep two variable that track largest and second largest in incoming stream of arrays. 
int SecondLargestElementApp2(int arr[],int n)
{
	int largest=0,seclargest=-1;
	for (int i = 1; i <n; ++i)
	{
		if(arr[i]>arr[largest])
		{	
			seclargest=largest;
			largest=i;
		}
		else if(arr[i]<arr[largest])
		{
			if(seclargest==-1)
			{
				seclargest=i;
			}
			else if (arr[i]>arr[seclargest])
			{
				seclargest=i;
			}

		}
	}
	return seclargest;


}
int main(int argc, char const *argv[])
{
	int arr[] ={1,2,2,2,2};
	int x=5;
	cout<<SecondLargestElementApp2(arr,x)<<endl;	

}
