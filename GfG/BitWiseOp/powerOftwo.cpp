#include <iostream>
using namespace std;
/*
Two approaches ::
1) app1 -> set bit should be one. 
2) app2 -> repeatedly divide by 2.
3) app3 -> logof 2 then if the value is inter then good 	 
*/

bool powerof2(int x)
{
	int set=0;
	while(x>0)
	{
		x=x&x-1;
		set++;
	}
	return (set==1);
}
bool powerof2App2(int x)
{
	if(x==0)
	{
		return false;
	}
	return (x&x-1 ==0);

}

int main(int argc, char const *argv[])
{
	cout<< powerof2(7)<<endl;
	return 0;
}