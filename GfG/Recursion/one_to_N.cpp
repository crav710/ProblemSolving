#include <iostream>
using namespace std;
/*
*/
void OnetoNRecur(int n)
{
	if(n==0)
	{
		return;
	}
	OnetoNRecur(n-1);
	cout<<n<<endl;
}

int main(int argc, char const *argv[])
{
	OnetoNRecur(5);
	return 0;
}