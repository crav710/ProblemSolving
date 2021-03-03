#include <iostream>
using namespace std;
/*
*/
int  SumOnetoNRecur(int n)
{
	if(n==0){
		return 0;
	}
	return n+SumOnetoNRecur(n-1);
}

int main(int argc, char const *argv[])
{
	cout<<SumOnetoNRecur(5)<<endl;
	return 0;
}