#include <iostream>
#include <string>


using namespace std;

int  main(){

   string team_name;
   double game_won;
   double game_lost;
   double percentage;

  cout <<"\n\nEnter the team's name : "<<endl;
  cin >> team_name;
  cout <<"Enter the games won : "<<endl;
  cin >> game_won;
  cout <<"Enter the games lost : "<<endl;
  cin >> game_lost;

  percentage = 100*game_won/(game_won + game_lost);
 
 cout <<team_name<<" Has a percentage of "<<percentage<<endl;
 
   return 0;

   }
