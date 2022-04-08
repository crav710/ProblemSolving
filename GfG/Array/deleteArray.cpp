#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int deleteArr(int arr[],int x, int n)
{

	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==x){
			break;
		}
	}
	if(i==n){
		return n;
	}
	for (int j = i; j < i ; ++j)
	{
		arr[j]=arr[j+1];
	}
	return n-1;
}
int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3,4,5}
	deleteArr(arr,3,5);
	return 0;
}