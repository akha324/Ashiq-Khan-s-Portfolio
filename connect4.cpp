#include <iostream>
#include <cstdlib>
using namespace std;

void check (int mode, string player, string computer, string grid[][6], string names[]){
         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 2; c++){
             if (player == "X" && (grid[r][c] == "X" && grid[r][c + 1] == "X" && grid[r][c + 2] == "X" && grid[r][c + 3] == "X")){   
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "X" && (grid[r][c] == "X" && grid[r][c + 1] == "X" && grid[r][c + 2] == "X" && grid[r][c + 3] == "X")){   
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "O" && (grid[r][c] == "O" && grid[r][c + 1] == "O" && grid[r][c + 2] == "O" && grid[r][c + 3] == "O")){   
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }

             if (computer == "O" && (grid[r][c] == "O" && grid[r][c + 1] == "O" && grid[r][c + 2] == "O" && grid[r][c + 3] == "O")){   
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
         }
         }

         for (int r = 0; r <= 3; r++){
         for (int c = 0; c <= 5; c++){
             if (player == "X" && (grid[r][c] == "X" && grid[r + 1][c] == "X" && grid[r + 2][c] == "X" && grid[r + 3][c] == "X")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }    
             
             if (computer == "X" && (grid[r][c] == "X" && grid[r + 1][c] == "X" && grid[r + 2][c] == "X" && grid[r + 3][c] == "X")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             } 
             
             if (player == "O" && (grid[r][c] == "O" && grid[r + 1][c] == "O" && grid[r + 2][c] == "O" && grid[r + 3][c] == "O")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }       
             
             if (computer == "O" && (grid[r][c] == "O" && grid[r + 1][c] == "O" && grid[r + 2][c] == "O" && grid[r + 3][c] == "O")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }             
         }
         }
         
         for (int r = 6; r >= 3; r--){
         for (int c = 0; c <= 2; c++){
              if (player == "X" && (grid[r][c] == "X" && grid[r - 1][c + 1] == "X" && grid[r - 2][c + 2] == "X" && grid[r - 3][c + 3] == "X")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "X" && (grid[r][c] == "X" && grid[r - 1][c + 1] == "X" && grid[r - 2][c + 2] == "X" && grid[r - 3][c + 3] == "X")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "O" && (grid[r][c] == "O" && grid[r - 1][c + 1] == "O" && grid[r - 2][c + 2] == "O" && grid[r - 3][c + 3] == "O")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "O" && (grid[r][c] == "O" && grid[r - 1][c + 1] == "O" && grid[r - 2][c + 2] == "O" && grid[r - 3][c + 3] == "O")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
}
}

            for (int r = 0; r <= 3; r++){
            for (int c = 0; c <= 2; c++){
              if (player == "X" && (grid[r][c] == "X" && grid[r + 1][c + 1] == "X" && grid[r + 2][c + 2] == "X" && grid[r + 3][c + 3] == "X")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "X" && (grid[r][c] == "X" && grid[r + 1][c + 1] == "X" && grid[r + 2][c + 2] == "X" && grid[r + 3][c + 3] == "X")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "O" && (grid[r][c] == "O" && grid[r + 1][c + 1] == "O" && grid[r + 2][c + 2] == "O" && grid[r + 3][c + 3] == "O")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "O" && (grid[r][c] == "O" && grid[r + 1][c + 1] == "O" && grid[r + 2][c + 2] == "O" && grid[r + 3][c + 3] == "O")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
            }
            }

            for (int r = 0; r <= 3; r++){
            for (int c = 5; c >= 3; c--){
              if (player == "X" && (grid[r][c] == "X" && grid[r - 1][c - 1] == "X" && grid[r - 2][c - 2] == "X" && grid[r - 3][c - 3] == "X")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "X" && (grid[r][c] == "X" && grid[r - 1][c - 1] == "X" && grid[r - 2][c - 2] == "X" && grid[r - 3][c - 3] == "X")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "O" && (grid[r][c] == "O" && grid[r - 1][c - 1] == "O" && grid[r - 2][c - 2] == "O" && grid[r - 3][c - 3] == "O")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "O" && (grid[r][c] == "O" && grid[r - 1][c - 1] == "O" && grid[r - 2][c - 2] == "O" && grid[r - 3][c - 3] == "O")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
            }
            }

            for (int r = 6; r <= 3; r--){
            for (int c = 5; c <= 3; c--){
              if (player == "X" && (grid[r][c] == "X" && grid[r - 1][c - 1] == "X" && grid[r - 2][c - 2] == "X" && grid[r - 3][c - 3] == "X")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "X" && (grid[r][c] == "X" && grid[r - 1][c - 1] == "X" && grid[r - 2][c - 2] == "X" && grid[r - 3][c - 3] == "X")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
             
             if (player == "O" && (grid[r][c] == "O" && grid[r - 1][c - 1] == "O" && grid[r - 2][c - 2] == "O" && grid[r - 3][c - 3] == "O")){
                if (mode == 1){
                   cout << names[0] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "You win!" << endl;
                   exit(0);
                }
             }
             
             if (computer == "O" && (grid[r][c] == "O" && grid[r - 1][c - 1] == "O" && grid[r - 2][c - 2] == "O" && grid[r - 3][c - 3] == "O")){
                if (mode == 1){
                   cout << endl << names[1] << " wins!" << endl;
                   exit(0);
                } 
                if (mode == 2){
                   cout << "\nYou lose." << endl;
                   exit(0);
                }
             }
            }
            }
}
         
void print (string grid[][6]){
         cout << endl;
         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             cout << grid[r][c];
         }
             cout << endl;
         }
}

void computerMove (int n, int mode, string player, string computer, string grid[][6], string names[]){
         if (mode == 1){
            cout << "It's " << names[1] << "'s turn." << endl;
            cout << "Enter a column number: ";
            cin >> n;
            n--;
         }
        
         if (mode == 2){
            cout << "It's the computer's turn." << endl;
            n = rand() % 6;
         }

            for (int r = 0; r <= 6; r++){
            for (int c = 0; c <= 5; c++){
                if (grid[r][n] == "🟦" && r == 6){
                   grid[r][n] = computer;
                   break;
                }   
                if ((grid[r][n] == "X" || grid[r][n] == "O") && r != 0 && grid[r - 1][n] == "🟦"){
                   grid[r - 1][n] = computer;
                   break;
                }
                if ((grid[r][n] == "X" || grid[r][n] == "O") && r == 0)
                   computerMove (n, mode, player, computer, grid, names);
            }
            }

         print (grid);
         check (mode, player, computer, grid, names);
}

void userMove (int n, int mode, string player, string computer, string grid[][6], string names[]){
         static int count = 1;

         if (count == 22){
            cout << "\nNo more moves are available." << endl;
            cout << "It's a draw!" << endl;  
            exit(0);
         }
         if (count == 1) cout << "Round " << count << endl;
         else { 
              cout << "\nRound " << count << endl;
         }

         cout << "It's " << names[0] << "'s turn." << endl;
         cout << "Enter a column number: ";
         cin >> n;
         
         while (n < 1 || n > 6){
              cout << "\nIllegal. The columns numbers are 1, 2, 3, 4, 5, and 6." << endl;
              cout << "Enter a column number: ";
              cin >> n;
         }
         n--;

         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             if (grid[r][n] == "🟦" && r == 6){
                 grid[r][n] = player;
                 break;
             }     
             if ((grid[r][n] == "X" || grid[r][n] == "O") && r != 0 && grid[r - 1][n] == "🟦"){
                grid[r - 1][n] = player;
                break;
             }
             if ((grid[r][n] == "X" || grid[r][n] == "O") && r == 0){
                cout << "\nIllegal. No slots are available in this column." << endl;
                userMove (n, mode, player, computer, grid, names);
             }
         }
         }

         print (grid);
         cout << endl;
         
         check (mode, player, computer, grid, names);
         computerMove (n, mode, player, computer, grid, names);
         count++;
         userMove (n, mode, player, computer, grid, names);
}

void assign (string &player, string &computer, string color){
         if (color == "red"){ 
             player = "X";
             computer = "O";
         }

         else {
             player = "O";
             computer = "X";
         }

         if (color == "yellow"){
            player = "O";
            computer = "X";
         }

         else {
           player = "X";
           computer = "O";
         }  
}

int main (){
         srand(time(0));
         int n;
         int mode;
         string temp;
         string player;
         string computer;
         string color;
         string names[2];
         string grid[7][6];

         for (int r = 0; r <= 6; r++){
         for (int c = 0; c <= 5; c++){
             grid[r][c] = "🟦";
         }
         }
         
         cout << "Welcome to Connect 4!" << endl;
         
         while (mode != 1 || mode != 2){
               
               cout << "Enter the number which corresponds with the game mode of your choice: " << endl << endl;
               cout << "1. Player VS Player" << endl;
               cout << "2. Player VS Computer" << endl << endl;
               cin >> mode;
               cout << endl;
               if (mode < 1 || mode > 2) cout << "Illegal. You must enter either 1 or 2." << endl;
               if (mode == 1) break;
               if (mode == 2) break;
         }

         if (mode == 1){
            cout << "Player 1. Enter your name: ";
            cin >> temp;
            names[0] = temp;

            cout << "Player 2. Enter your name: ";
            cin >> temp;
            names[1] = temp;
            cout << endl;
         }

         if (mode == 2){
            cout << "Enter your name: ";
            cin >> temp;
            names[0] = temp;
            cout << endl;
         }

         while (color != "X" || color != "O"){
               cout << "Select the mark of your chip." << endl;
               cout << "Enter \"X\" or \"O\" to continue: ";
               cin >> color;

               if (color == "X") break;
               if (color == "O") break;
               cout << "\nIllegal. Your choices are either \"X\" or \"O\"." << endl;
         }

         assign (player, computer, color);
         print (grid);
         cout << endl;
         userMove (n, mode, player, computer, grid, names);

         return 0;
}