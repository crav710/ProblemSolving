#include <iostream>
using namespace std;
/*
*/
bool  isPallindrome(string &st,int start,int end)
{
	if(start>=end)//(end==0 || end==1)
	{
		return true;
	}
	if(st[start]==st[end])
	{
		return isPallindrome(st,start+1,end-1);
	}
	else{
		return false;
	}
//	return (st[start]==st[end]) && isPallindrome(st,start+1,end-1);
}

int main(int argc, char const *argv[])
{
	string str ="abbd";
	cout<<str.size()<<endl;
	cout<<isPallindrome(str,0,str.size()-1)<<endl;
	return 0;
}