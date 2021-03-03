#include <iostream>
using namespace std;
/*
*/
int  SumDigits(int n)
{
	if(n<=9){
		return n;
	}
	return n%10+SumDigits(n/10);
}

int main(int argc, char const *argv[])
{
	cout<<SumDigits(12345)<<endl;
	return 0;
}