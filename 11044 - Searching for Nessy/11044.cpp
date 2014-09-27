#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int tc,n,m;
	cin>>tc;
	for (int i = 0; i < tc; ++i)
	{
		cin>>n;
		cin>>m;
		n=floor(n/3);
		m=floor(m/3);
		cout<<n*m<<endl;
		n=0;
		m=0;
	}
	return 0;
}
