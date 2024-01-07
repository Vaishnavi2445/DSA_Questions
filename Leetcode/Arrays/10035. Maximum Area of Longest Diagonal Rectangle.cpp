class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maximum = 0 ;
        int x;
        for(int i=0; i<dimensions.size(); i++){
            
           double Diagonal_length = sqrt((dimensions[i][0]*dimensions[i][0])+ (dimensions[i][1] * dimensions[i][1]));

           
            
          if(Diagonal_length>maximum){
                maximum = Diagonal_length;
                x = dimensions[i][0]*dimensions[i][1];
                
            }

           else if(Diagonal_length == maximum){
               
               x = max(x, dimensions[i][0]*dimensions[i][1]);
           }
            
            
            
            
        }
        return x;
        
    }
};
