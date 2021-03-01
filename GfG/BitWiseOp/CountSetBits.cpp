#include <iostream>
using namespace std;
/*
Two approaches ::
1) app1 -> remove last after checking 
2) app2 -> Brain kerningam Solution n&n-1
3) app3 -> LookupTable -> precompute the table[n]. Here table stores the setbits for ith number, We divide the number is 8 bits chunks .
table[i]=(i&1)+table[i/2]
we check the last bit of i and then add the i/2 result same as naive approach in dp fashion. 
To handle 32 bit we simply check 8 one by one .
*/
int table[256];
table[0]=0;
for(int i=0;i<256;i++)
{
	table[i]=table[i/2]+(i&1);
}

int countSetBits_app1(int n)
{
	int setbit=0;
	while(n>0)
	{
		setbit+=(n&1);
		n=n>>1;
	}
	return setbit;
}
int countSetBits_app2(int n)
{
	int setbit=0;
	while(n>0)
	{
		n=n&(n-1);
		setbit++;
	}
	return setbit;
}

int countSetBits_app3(int n)
{

	int res = table[n&0xff];
	n=n>>8;
	res=res+table[n&0xff];
	n=n>>8;
	res=res+table[n&0xff];
	n=n>>8;
	res=res+table[n&0xff];
	return res;		

}


int main(int argc, char const *argv[])
{
	cout<< countSetBits(7)<<endl;
	return 0;
}