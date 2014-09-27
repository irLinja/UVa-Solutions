#include <iostream>
using namespace std;

int main()
{
	int tc,i;
	int line [10];
	bool ordered = false;
	cin>>tc;
	cout << "Lumberjacks:" << endl;
	for (int j = 0; j < tc; j++)
	{
		for (i = 0; i < 10; ++i)
			cin>>line[i];


		for (i = 0; i < 9; ++i)
			if(line[i] <= line[i+1])
				continue;
			else
				break;
		if (i==9)
			ordered = true;

		if (!ordered)
		{
			for (i = 0; i < 9; ++i)
			if(line[i] >= line[i+1])
				continue;
			else
				break;
			if (i==9)
				ordered = true;
		}

		if(ordered)
			cout<<"Ordered"<<endl;
		else
			cout<<"Unordered"<<endl;
		ordered = false;
	}
	return 0;
}
