#include <iostream>
using namespace std;

int main()
{
	float tc,sum,dif,A,B;
	cin>>tc;
	for (int i = 0; i < tc; ++i)
	{
		cin>>sum>>dif;
		if (sum < dif || ((int)sum+(int)dif) % 2)
		{
			cout<<"impossible"<<endl;
		}
		else
		{
			A = B = sum/2;
			A+=dif/2;
			B-=dif/2;
			cout<<A<<" "<<B<<endl;
		}
	}
	return 0;
}
