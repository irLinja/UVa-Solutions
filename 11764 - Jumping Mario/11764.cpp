#include <iostream>
using namespace std;

int main()
{
	int t,n;
	int h=0;
	int l=0;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		int a[49]={0};
		for(int z =0; z<n; z++)
			cin>>a[z];
		for(int j = 0; j<n-1; j++)
		{
			if(a[j] < a[j+1])
				h++;
			if(a[j] > a[j+1])
				l++;
		}

