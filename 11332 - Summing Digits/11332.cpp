#include <iostream>
using namespace std;

int SumDgits(int);
int main()
{
     int Input;
    while(cin>>Input)
    {
            if(Input==0)
                break;
           SumDgits(Input);
    }
    return 0;
}

int SumDgits(int n)
{
    int sum,get;
    sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
        get=sum;
    }
    if(get/10==0)
        cout<<get<<endl;
    else
        SumDgits(get);

}
