#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
/*


*/
void powerSet(string str)
{
	int length = str.size();
	int Numset = pow(2,length);
	cout<<Numset<<endl;
	for(int i=0;i<Numset;i++)
	{
		for (int j = 0; j < length ; j++)
		{
			if((i&(1<<j))!=0)
			{
				cout<<str[j];
			}

		}
		cout<<endl;
	}
}
int main(int argc, char const *argv[])
{
	string str="abc";
	powerSet(str);
	return 0;
}