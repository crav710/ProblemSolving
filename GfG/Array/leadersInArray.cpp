#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*

We know that in an array if we have found a leader then the second leader from end would always be bigger than the first leader. 


*/
void LeadersInArray(int arr[],int n)
{
	int currL=arr[n-1];
	cout<<currL<<" ";
	for (int i =n-2; i >=0; i--)
	{
		if(currL<arr[i])
		{
			currL=arr[i];
			cout<<currL<<" ";
		}
	}

}
int main(int argc, char const *argv[])
{
	int arr[] ={7,10,4,3,6,5,2};
	int n= sizeof(arr)/sizeof(arr[0]);
	LeadersInArray(arr,n);
}
