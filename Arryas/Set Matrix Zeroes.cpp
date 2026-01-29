class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> rowzero(m, 0);
        vector<int> colzero(n, 0);

        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    rowzero[i] = 1;
                    colzero[j] = 1;
                }
            }
        }
        for(int i = 0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(rowzero[i] == 1 || colzero[j] == 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
