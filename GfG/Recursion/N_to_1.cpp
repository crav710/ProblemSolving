#include <iostream>
using namespace std;
/*
*/
void NtoOneRecur(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<endl;
	NtoOneRecur(n-1);
}

int main(int argc, char const *argv[])
{
	NtoOneRecur(5);
	return 0;
}