#include <iostream>
using namespace std;
/*


*/
int findMissingNumber(int arr[],int n)
{
	int xorsum=0
	for (int i = 1; i <=n+1; ++i)
	{
		xorsum+=i;
	}
	for (int i = 0; i < n; ++i)
	{
		xorsum+=arr[i]
	}
	return xorsum

}
int main(int argc, char const *argv[])
{
	int arr[4]={1,2,3,5}
	cout<< findMissingNumber(arr)<<endl;
	return 0;
}