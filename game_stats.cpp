//Game Stats
//Demonstrates declaring and intilizing variables

#include <iostream>
using namespace std;

int main()
{
  int score;
  double distance;
  char playAgain;
  bool shieldsUp;
  
  short lives, aliensKilled;
  
  score=0;
  distance=1200.76;
  playAgain='y';
  shieldsUp=false;
  lives=32767;
  aliensKilled=3755;
  double engineTemp=324587.89;

  cout << "\nscore:" << score <<endl;
  cout << "distance:"     <<distance<<endl;
  cout << "playAgain:"     <<playAgain<<endl;
  //skiping shieldsUp science you don't generally print Boolean values
  cout << "lives:"         <<lives<<endl;
  cout << "aliensKilled:"<<aliensKilled<<endl;
  cout << "engineTemp:"    <<engineTemp<<endl;

  int fuel;
  cout << "\nHow much fuel?";
  cin >> fuel;
  cout << "fuel:"<<fuel <<endl;   
  
  typedef unsigned short int banana;
  banana bonus=10;
  cout<< "\nbonus:" <<bonus<<endl;

  return 0;

}
