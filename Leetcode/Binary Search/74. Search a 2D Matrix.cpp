class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

       int m = matrix.size();
       int n = matrix[0].size();

        for(int i=0; i<m; i++){
            if(target == matrix[i][n-1] ){
                return true;
            }

            if(target < matrix[i][n-1]){
               
             for(int j= (n-1)-1; j>=0; j-- ){
                 if(target == matrix[i][j] ){
                return true;
            }
            
             }
            }

            
        }
        return false;
    }
};

OR


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //first find the row it is in (check the first int of matrix[i])
        int rows = matrix.size();
        int cols = matrix[0].size();
        int r = 0, c = cols - 1;

        while (r < rows && c > -1){
            int cur = matrix[r][c];
            if (cur == target) return true;
            if (target > cur) r++;
            else c--;
        }
        return false;
    }
};
