#include <iostream>
using namespace std;

/*
Two approaches ::
1) best approach :: Take the xor of all arr (you will get two odd occuring number). Now in this two let say 
5^6 =3
in 3 any set bit is cotributed from 5 &6 so on one number that bit will be set and another will be 0.
So now yoy need to divide the array in two parts. and xor them indiviudaully since in both array there would be one number.
*/
int twoOddOccuring(int arr[],int n)
{
	int xorsum=0;
	int res1=0;
	int res2=0;
	for (int i = 0; i < n; ++i)
	{
		xorsum+=arr[i];
	}
	//now finding the bit to check (righmost set bit in xor )
	// 5^6 -> 3 (011)&(101) ( you effectively first unset the last set bit and to get it you then remove all trailing set bit and do and)
	int snth= xorsum & ~(xorsum-1);

	for (int i = 0; i < n; ++i)
	{
		if(arr[i]&snth !=0){
			res1+=arr[i];
		}
		else{
			res2+=arr[i];
		}
	}
	cout<<res1<<" "<<res2<<endl;

}
int main(int argc, char const *argv[])
{
	int arr[5]={1,2,2,1,3}
	cout<< twoOddOccuring(arr)<<endl;
	return 0;
}