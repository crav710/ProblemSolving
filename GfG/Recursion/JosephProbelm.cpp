#include <iostream>
using namespace std;
/*

While solving a recursion problem we need to have relation from subproblems to bigger problems how they add up. 
We do the same thing here we see that 
Jos(5,3) -> Jos(4,3)
the positions of circle changes . 
here now in 4,3 
0-> (3)%5
1-> (3+1)%5
2-> (3+2)%5
4-> (3+3)%5

So that's simple now . if subproblem gives us the correct result then we can get correct for bigger ones. 

Jos(n,k)=(Jos(n-1,k)+k)%n



*/
int  circularKill(int n,int k)
{
	if(n==1)
	{
		return 0;
	}
	return (circularKill(n-1,k)+k)%n;
}

int main(int argc, char const *argv[])
{
	cout<<circularKill(7,3)<<endl;
	return 0;
}