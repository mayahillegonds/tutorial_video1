#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() 
{  

  string name = "Maya";
  char middle_initial = 'S';
  int age = 21;
  bool likes_mcdonalds = 1;
  string favorite_game = "The Sims 4";
  double favorite_number = 921.11;

  // cout << name;
  // cout << "\n";
  // cout << "Maya\n";
  // cout << "Sentence one," << " sentence two, " << "number one.\n";

  // cout << name << "\n";
  // cout << middle_initial << "\n";
  // cout << age << ", " << likes_mcdonalds << "\n";

  string input;
  cin >> input;
  cout << input << " is what you input!\n";

  /*
  + addition
  -
  *
  /
  % modulo

  10%2 = 0
  11%2 = 1
  */

  int result;
  cout << result << "\n";
  5 + 5;
  result = 5 + 5;
  cout << result << "\n";
  result = 10 / 2;
  cout << result << "\n";

  result = sqrt(4);
  cout << result << "\n";
  double base = 2.0;
  double exponent = 3.0;
  double result_power = pow(base, exponent);
  cout << result_power << "\n";


  result = 10 + 2;
  result = result + 1;

  result++; //+1 to result
  result--; //-1 to result

  return 0;
}
