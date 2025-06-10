#include <iostream>
using namespace std;

int main(){
        int q[8][8] = {};
        int count = 0; 
        int r = 0; 
        int c = 0; 
        q[0][0] = 1; 
  
        columnCheck:
        c++;
        if(c == 8) goto printSolution;
        r = -1;  
        
        rowCheck: 
        r++;
        if (r == 8) goto backtrack;   
        
        for (int i = 0; i < c; i++)
        if (q[r][i] == 1) goto rowCheck; 
        
        for (int i = 1; i <=r && i <= c ; i++)
        if (q[r - i][c - i] == 1) goto rowCheck; 

        for (int i = 1; r + i < 8 && i <= c; i++)
        if (q[r + i][c - i] == 1) goto rowCheck; 
        q[r][c] = 1;
        goto columnCheck; 

        backtrack:
        c--;
        if (c == -1) return 0;
        r = 0;
        while (q[r][c] != 1) r++;
        q[r][c] = 0;
        goto rowCheck;  
        
        printSolution: 
        count++;
        cout << "Solution #" << count << endl;
        for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
        if (q[i][j] == 1) cout << "1";
           else cout << "0";
        }
        cout << endl;
        }
        cout << endl;
        
        goto backtrack;

        return 0;
}