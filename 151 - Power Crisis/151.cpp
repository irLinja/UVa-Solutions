#include "iostream"
#include "list"
using namespace std;
 
int Check(int, int);
 
int main ()
{
	int Lenght;
    while (true)
    {
 		cin>>Lenght;

        if (Lenght == 0)
        return 0;
 
        int Treshold = 1;
         while (true)
         {             
            if (Check(Lenght, Treshold) == 13)
                break;
            Treshold++;
        }
 
        cout<<Treshold <<endl;
    }
 
    return 0;
}

int Check (int Lenght , int Treshold)
{
    list <int> lst;

    for (int i = 1; i <= Lenght; i++)//fill the list
        lst.push_back (i);
 
    while ( lst.size () > 1 )//do untill last station
    {
        lst.pop_front ();//remove first
        for (int i = 1; i < Treshold; i++)
        {
            lst.push_back ( lst.front () );//swap first and last untill Treshold arrives
            lst.pop_front ();//remove Treshold
        }
    }
 
    return lst.front ();//return last station
}
