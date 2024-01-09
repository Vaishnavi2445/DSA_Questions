class Solution {
private:
vector<int> nextSmallerElement(vector<int>& arr, int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);

    for(int i=n-1; i>=0; i--){
        
     while(s.top()!=-1 && arr[s.top()]>=arr[i]){
         s.pop();
     }
     
     ans[i]=s.top();
     s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int>& arr, int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);

    for(int i=0; i<n; i++){
      
     while(s.top()!=-1 && arr[s.top()]>=arr[i]){
         s.pop();
     }
     
     ans[i]=s.top();
     s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int>& height, int n){

    vector<int> next(n);
        next = nextSmallerElement(height, n);
            
        vector<int> prev(n);
        prev = prevSmallerElement(height, n);

        int area = INT_MIN;

         for(int i=0; i<n; i++){
            int l = height[i];

            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i]-prev[i]-1;

            area = max(area, l*b);
         }
         return area;
}
public:
    int maximalRectangle(vector<vector<char>>& matrix) {

         if(matrix.empty()){
        return 0;
    }

        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> height(n, 0);
        int area = 0 ;

        for(int i=0; i<m; i++){
           for(int j=0; j<n; j++){

               if(matrix[i][j]!='0'){
                   height[j]++;
               }
               else{
                   height[j]=0;
               }
           }
           area = max(area, largestRectangleArea(height, n));
        }
        return area;
    }
};
