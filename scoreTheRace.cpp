#include <iostream>
#include <vector>
using namespace std;

bool ok (string outcome){
         // This section will determine if each character in the outcome is a letter between A and Z.
         for (int i = 0; i <= outcome.length() - 1; i++){
         for (char j = 49; j <= 64; j++){
             if (outcome[i] == j){
             cout << "\nIllegal. Each team must be a character between A and Z.\n";
             return false;
         }
         }
         }
         for (int i = 0; i <= outcome.length() - 1; i++){
         for (char j = 91; j <= 126; j++){
             if (outcome[i] == j){
                cout << "\nIllegal. Each team must be a character between A and Z.\n";
                return false;
         }
         }
         }
         
         // This section will determine if each team has the same number of players.
         vector<int> teamSizes (0);
         int count = 0;
         
         for (char i = 'A'; i <= 'Z'; i++){
         for (int j = 0; j <= outcome.length() - 1; j++){
             if (outcome[j] == i) count++;
         }
         if (count == 0) continue;
         teamSizes.push_back(count);
         count = 0;
         }

         for (int i = 0; i <= teamSizes.size() - 1; i++){
         for (int j = 0; j <= teamSizes.size() - 1; j++){
             if (teamSizes[i] != teamSizes[j]){
                cout << "\nIllegal. Each team must have the same number of players.\n";
                return false;
         }
         }
         }

         return true;
} 

int main (){
         while (true){
               
               vector<char> teams (0);
               vector<double> teamScores (0); 
               int numTeams;
               int numRunners = 0;
               char winningTeam;
               double winningScore;
        
               string outcome;

               cout << "Enter the race outcome: ";
               cin >> outcome;
  
               if (outcome == "done") return 0;

               if (ok (outcome)) goto next;
               else continue;
               
               next:
               // This section will store each team in an array.
               for (char i = 'A'; i <= 'Z'; i++){
               for (int j = 0 ; j <= outcome.length() - 1; j++){
                   if (outcome[j] == i){
                      teams.push_back(i);
                      break;
               }
               }
               }

               // This section will calculate the number of teams.
              numTeams = teams.size();

              // This section will calculate the number of runners on each team.
               for (int i = 0; i <= outcome.length() - 1; i++)
                   if (outcome[i] == teams[0]) numRunners++;

              // This section will calculate the team scores and store them in an array.
              double score = 0;
              for (int i = 0; i <= teams.size() - 1; i++){
              for (int j = 0; j <= outcome.length() - 1; j++){
                  if (teams[i] == outcome[j]) score += (j + 1);
              }
              score /= numRunners;
              teamScores.push_back(score);
              score = 0;
}

         // This section will check if any of the team scores are tied. If they are, the user will be prompted to re-enter the race outcome.
         for (int i = 0; i <= teamScores.size() - 1; i++){
         for (int j = 0; j <= teamScores.size() - 1; j++){
             if (i == j) continue;
             if (teamScores[i] == teamScores[j]){
                cout << "\nIllegal. Each team must have a different score.\n";
                main ();
            }
         }
         }

         // This section will determine the winning team and score.
         winningScore = teamScores[0];
         for (int i = 0; i <= teamScores.size() - 1; i++)
             if (winningScore > teamScores[i]) winningScore = teamScores[i];
         for (int i = 0; i <= teamScores.size() - 1; i++)
             if (teamScores[i] == winningScore) winningTeam = teams[i];

         // This section will display the output. NOTE: Grammar is important.
         cout << "\nThere are " << numTeams << " teams.\n";
         if (numRunners > 1) cout << "\nEach team has " << numRunners << " runners.\n";
         else {
         cout << "\nEach team has " << numRunners << " runner.\n";  
         }
         cout << "\nTeam   Score\n";
         cout << "¯¯¯¯   ¯¯¯¯¯\n";

         for (int i = 0; i <= teams.size() - 1; i++)
             cout << teams[i] << "      " << teamScores[i] << endl;
         
         cout << "\nThe winning team is team " << winningTeam << " with a score of " << winningScore << ".\n";

         }
         return 0;
}