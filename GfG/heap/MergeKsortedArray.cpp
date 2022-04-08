#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*
Using Heap with 3 value of node 
1) value of element 
2) Position of array
3) Position in array
*/
struct Triplet
{
	int val,aPos,vPos;
	Triplet(int	v,int ap,int vp)
	{
		val=v;
		aPos=ap;
		vPos=vp;
	}
};
struct MyComp
{
	bool operator ()(Triplet &t1 , Triplet &t2)
	{
		return t1.val > t2.val;
	}

};

vector<int> mergeArr(vector<vector<int>> &v)
{
	std::vector<int> res;
	priority_queue <Triplet,vector<Triplet>,MyComp> pq;
	for (int i = 0; i < v.size(); ++i)
	{
		Triplet t(v[i][0],i,0);
		pq.push(t);
	}

	while(pq.empty()==false)
	{
		Triplet curr = pq.top();
		pq.pop();
		cout<<curr.val<<endl;
		res.push_back(curr.val);
		int ap = curr.aPos;
		int vp = curr.vPos;
		if (vp+1 < v[ap].size())
		{
			Triplet t(v[ap][vp+1],ap,vp+1);
			pq.push(t);
		}
	}

	return res;
}
int main()
{

	vector<vector<int> > arr{ { 10, 20, 30 }, 
                              { 5, 15 }, 
                              { 1, 9, 11, 18 } }; 
  
    vector<int> res= mergeArr(arr);  
    cout << "Merged array is " << endl; 
    for (auto x : res) 
        cout << x << " "; 
  
    return 0; 
}
