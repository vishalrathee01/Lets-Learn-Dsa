//leet code problem 
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n-1;
        int endingCol = m-1;
        
        int count = 0;
        int total = n*m;
        
        while(count<total)
        {
            for(int col = startingCol;count<total && col<=endingCol;col++)
            {
                ans.push_back(matrix[startingRow][col]);
                count++;
            }
            startingRow++;
            for(int row = startingRow;count<total && row<=endingRow;row++)
            {
                ans.push_back(matrix[row][endingCol]);
                count++;
            }
            endingCol--;
            for(int col = endingCol;count<total && col>=startingCol;col--)
            {
                ans.push_back(matrix[endingRow][col]);
                count++;
            }
            endingRow--;
            for(int row = endingRow;count<total &&row>=startingRow;row--)
            {
                ans.push_back(matrix[row][startingCol]);
                count++;
            }
            startingCol++;
        }
        
        return ans;
    }
