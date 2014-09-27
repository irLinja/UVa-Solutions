#include <iostream>
using namespace std;


int main()
{
	int tc,f=0,animal=0,area=0,ef=0,sum=0;
	cin>>tc;
	for(int i = 0; i<tc;i++)
	{
		cin>>f;
		for(int i =0; i<f;i++)
		{
			cin>>area >>animal >>ef;
			sum+=area*ef;
		}
		cout<<sum;
		sum=0;
	}
	return 0;
}
