#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*
1) Simple Recursive solution. You traverse each node and add 1 to it . and then take max of left subtree and right subtree starting from top.
2) 

*/
int HeightTree(Node *root)
{
	if(root == NULL)
	{
		return 0;
	}
	else
	{
		return max(HeightTree(root->left),HeightTree(root->right))+1;
	}

}
int main(int argc, char const *argv[])
{
	int arr[] ={1,2,3,4,4,4,4};
	int n= sizeof(arr)/sizeof(arr[0]);
	int x = function(arr,n);
	cout<<x<<endl;

}
