#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
/*
	We need to find the index of largest element 
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

int main(int argc, char const *argv[])
{
	int arr[] ={1,2,3,4,5};
	cout<<largestElementApp1(arr,5)<<endl;	

}
