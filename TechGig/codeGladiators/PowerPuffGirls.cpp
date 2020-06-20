

	/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	vector <unsigned long long int> ingredientsRequired;
	vector <unsigned long long int> ingredientsAvailable;
	scanf("%d", &n);
	for(int i=0; i< n ; i++)
	{
		scanf("%lld", &ingredientsRequired[i]);
	}
	for(int i=0; i< n ; i++)
	{
		scanf("%lld", &ingredientsAvailable[i]);
	}
	unsigned long long int minGirls=LLONG_MAX;
	for(int i=0; i< n ; i++)
	{
		unsigned long long int countGirl=ingredientsAvailable[i]/ingredientsRequired[i];
		if(minGirls>countGirl){
			minGirls=countGirl;
		}
	}
	printf("%lld\n", minGirls);
	return 0;
}
