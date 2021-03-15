#include <iostream>
using namespace std;
/*

A different type of recursion we need to do.
*/


void permutation(string st,int i=0)
{
	if(i==st.size()-1)
	{
		cout<<st<<endl;
		return;
	}
	for (int j = i; j < st.size(); ++j)
	{
		swap(st[i],st[j]);
		permutation(st,i+1);
		swap(st[i],st[j]);
	}
	
}

int main(int argc, char const *argv[])
{
	string st="ABC";
	permutation(st,0);
	return 0;
}