#include <iostream>
using namespace std;

/*
Two approaches ::
1) use a hash table O(n).
2) xor all and the one which is left is the odd one out.
3) 
*/
int oneOddOccuring(int arr[],int n)
{
	int num=0;
	for (int i = 0; i < n; ++i)
	{
		num=num^arr[i];
	}
	return num;
}
int main(int argc, char const *argv[])
{
	int arr[5]={1,2,2,1,3}
	cout<< oneOddOccuring(arr)<<endl;
	return 0;
}