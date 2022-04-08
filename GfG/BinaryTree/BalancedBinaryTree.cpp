#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*
a binary tree in which the left and right subtrees of every node differ in height by no more than 1.
1) One approach can be to check the difference in height of left and right sub tree . If it is not more than one we are good. (O(n^2)).
2) Second effciend approach is to check at all sub levels if the tree is balanced or not. Now how you will pass on values 
if it is balanced pass on height or else pass negative . If encountered negative then bye bye.


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
bool IsBalanced(Node *root)
{
	if(root==NULL)
	{
		return true; 
	}
	int lh = HeightTree(root->left);
	int rh = HeightTree(root->right);

	return ((abs(lh-rh) <=1) && IsBalanced(root->left) && IsBalanced(root->right));
}
/*
O(n) Implementation

*/
int IsBalanced(Node *root)
{
	if (root == NULL)
	{
		return 0;		
	}
	int lh = IsBalanced(root->left);
	if (lh==-1)
	{
		return -1;
	}
	int rh = IsBalanced(root->right);
	if(rh==-1)
	{
		return -1;
	}
	if (abs(lh-rh)>1)
	{
		return -1;		
	}
	else
	{
		return max(lh,rh)+1;
	}

}
