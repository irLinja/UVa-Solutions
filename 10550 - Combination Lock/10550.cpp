#include <iostream>
using namespace std;
#define fullturn 40
int cost(int,int,bool);
int main()
{
	int total=0,last,one,two,three;
	const int reset = 120;
	bool wl=true;
	while(wl)
	{
		cin>>last>>one>>two>>three;
		if (last == 0 && one == 0 && two == 0 && three == 0)
			break;
		total+=cost(last,one,true);
		total+=cost(one,two,false);
		total+=cost(two,three,true);
		cout<<(total+reset)*9<<endl;
		total=0;
	}
	return 0;
}

int cost(int a,int b, bool CW)
{
	if(CW)//CW
		if(a<b)
			return fullturn-(b-a);
		else
			return (a-b);
	else//CCW
		if(a>b)
			return fullturn-(a-b);
		else
			return (b-a);
}
