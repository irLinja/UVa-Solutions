#include "iostream"
using namespace std;

int Participant,Budget,Hotel,Weeks;

int main() {
 while (true)
 {
  int MinimumCost = 2000000000;
  cin >> Participant >> Budget >> Hotel >> Weeks;
  if (cin.eof()) break;
  for (int i=1; i<=Hotel; i++)
  {
   int Price,AvailableBeds;
   cin >> Price;
   for (int j=1; j<=Weeks; j++)
   {
    cin >> AvailableBeds;
    if (AvailableBeds>=Participant && Participant*Price<MinimumCost) MinimumCost = Participant*Price;
   }
   
  }
  if (MinimumCost<=Budget) cout << MinimumCost << endl;
  else cout << "stay home" << endl;
 }
 return 0;
}
