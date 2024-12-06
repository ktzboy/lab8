#include <iostream>
using namespace std;

int main()
{
  string S = "You have received Super Ultra Rare Unit!!!\n";
  string A = "You have received 5 gems.\n";
  string B = "You have received 1 gems.\n";
  string C = "You have received 2000 coins.\n";
  string D = "You have received very KAK items.\n";

  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if(rank == 'S') {
    cout << S << A << B << C <<  D;
  } else if(rank == 'A') {
    cout << A << B << C << D;
  } else if(rank == 'B') {
    cout << B << C << D;
  } else if(rank == 'C') {
    cout << C << D;
  } else if(rank == 'D') {
    cout << D;
  } else;
  return 0;
}
