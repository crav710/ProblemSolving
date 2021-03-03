#include <iostream>
using namespace std;
/*

you start with an empty string and choose to add A and not choose to Add A. 
keep an index when index reaches the the length you traverse up again.

*/
void  Subsets(string  &st, int index,string res)
{
	if(index==st.size())
	{	
		cout<<res<<" ";
		return;
	}
	Subsets(st,index+1,res);
	res+=st[index];
	Subsets(st,index+1,res);
}	
int main(int argc, char const *argv[])
{
	string st="abc";
	Subsets(st,0,"");
	return 0;
}

