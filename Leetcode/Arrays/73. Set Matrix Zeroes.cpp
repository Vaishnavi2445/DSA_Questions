class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>temp=matrix;
        
        for(int i=0; i<matrix.size(); i++){
            
            for(int j=0; j<matrix[i].size(); j++){
                
                if(matrix[i][j]==0){
                    
                    for(int z=0; z<matrix[i].size(); z++){
                        temp[i][z]=0;
                    }
                        
                    for(int z=0; z<matrix.size(); z++){
                        temp[z][j]=0;
                    }
                    
                }
                
            }
            
        }
        matrix=temp;
    }
};
