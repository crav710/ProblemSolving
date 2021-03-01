#include <iostream>
using namespace std;
/*
Two approaches ::
1) left shift operator 
2) right shift operator -> move the kth bit to last position and check with1.
*/
bool iskthBitSet(int n, int k)
{
	int bitMask = 1<<k-1;
	cout<<bitMask<<endl;
	if(n&bitMask)
	{
		return true;
	}
	return false;
}
bool iskthBitSetApp2(int n, int k)
{
	if(n>>(k-1)&1)
	{
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	cout<< iskthBitSet(5,2)<<endl;
	return 0;
}