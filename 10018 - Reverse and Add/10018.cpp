#include <iostream>
using namespace std;
typedef unsigned long ul;

bool IsPal(ul);
ul GetRev(ul);

int main()
{
    ul tc, Input;
    cin >> tc;
    for (int i = 0; i < tc; ++i)
    {
    	cin>> Input;
    	int iterations = 0;
    	while(!IsPal(Input))
    	{
            Input += GetRev(Input);
            iterations++;
        }

    	cout<< iterations << " " << Input <<endl;
    	iterations = 0;
    }
    return 0;
}

ul GetRev(ul num)
{
	ul rev = 0, dig;
	 while (num > 0)
	 {
	      dig = num % 10;
	      rev = rev * 10 + dig;
	      num = num / 10;
	 }
	 return rev;
}

bool IsPal(ul num)
{
	if (num == GetRev(num))
		return true;
	else
		return false;
}
