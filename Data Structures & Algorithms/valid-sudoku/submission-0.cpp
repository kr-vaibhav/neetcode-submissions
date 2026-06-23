class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9);
        vector<unordered_set<char>>col(9);
        vector<unordered_set<char>>cell(9);

        for(int i = 0; i < 9; ++i){
            int rowi = i;
            for(int j = 0; j < 9; ++j){
                char ch = board[i][j];
                if(ch=='.')continue;
                else{
                    int colj = j;
                    int boxNo = (rowi/3)*3+colj/3;
                    if(row[i].find(ch)!=row[i].end())return false;
                    else{
                        row[i].insert(ch);
                    }
                    if(col[j].find(ch)!=col[j].end())return false;
                    else{
                        col[j].insert(ch);
                    }
                    if(cell[boxNo].find(ch)!=cell[boxNo].end())return false;
                    else{
                        cell[boxNo].insert(ch);
                    }
                }
                
            } 
        }

        return true;
    }
};
