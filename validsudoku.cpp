//leetcode solution with function
class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            // Check rows
            for (int i = 0; i < 9; i++) {
                unordered_map<int, int> freq;
                for (int j = 0; j < 9; j++) {
                    if (board[i][j] != '.') {  // Check for non-empty cells
                        int num = board[i][j] - '0';  // Convert char to int
                        if (freq[num] > 0) return false;  // Duplicate found
                        freq[num]++;
                    }
                }
            }
    
            // Check columns
            for (int i = 0; i < 9; i++) {
                unordered_map<int, int> freq;
                for (int j = 0; j < 9; j++) {
                    if (board[j][i] != '.') {  // Check for non-empty cells
                        int num = board[j][i] - '0';  // Convert char to int
                        if (freq[num] > 0) return false;  // Duplicate found
                        freq[num]++;
                    }
                }
            }
    
            // Check 3×3 sub-boxes
            for (int boxRow = 0; boxRow < 3; boxRow++) {
                for (int boxCol = 0; boxCol < 3; boxCol++) {
                    unordered_map<int, int> freq;
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            char c = board[boxRow * 3 + i][boxCol * 3 + j];
                            if (c != '.') {
                                int num = c - '0';
                                if (freq[num] > 0) return false;  // Duplicate in 3x3 box
                                freq[num]++;
                            }
                        }
                    }
                }
            }
    
            return true;  // If no duplicates are found
        }
    };
//full code
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool isValidSudoku(vector<vector<char>>& board) 
{
    // Check rows
    for (int i = 0; i < 9; i++) {
        unordered_map<int, int> freq;
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != '.') {  // Check for non-empty cells
                int num = board[i][j] - '0';  // Convert char to int
                if (freq[num] > 0) return false;  // Duplicate found
                freq[num]++;
            }
        }
    }

    // Check columns
    for (int i = 0; i < 9; i++) {
        unordered_map<int, int> freq;
        for (int j = 0; j < 9; j++) {
            if (board[j][i] != '.') {  // Check for non-empty cells
                int num = board[j][i] - '0';  // Convert char to int
                if (freq[num] > 0) return false;  // Duplicate found
                freq[num]++;
            }
        }
    }

    // Check 3×3 sub-boxes
    for (int boxRow = 0; boxRow < 3; boxRow++) {
        for (int boxCol = 0; boxCol < 3; boxCol++) {
            unordered_map<int, int> freq;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char c = board[boxRow * 3 + i][boxCol * 3 + j];
                    if (c != '.') {
                        int num = c - '0';
                        if (freq[num] > 0) return false;  // Duplicate in 3x3 box
                        freq[num]++;
                    }
                }
            }
        }
    }

    return true;  // If no duplicates are found
}
int main()
{
    vector<vector<char>>board(9, vector<char>(9));
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>board[i][j];
        }
    }
    bool ans=isValidSudoku(board);
    if(ans)
    {
    cout<<"True";
    }else{cout<<"False";}
    return 0;
}
//output
/*
//input 9X9 vector
return TRUE if sudoku is valid
return FALSE if sudoku is unvalid
*/