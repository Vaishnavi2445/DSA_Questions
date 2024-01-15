class Solution {
public:
    int trap(vector<int>& height) {

    int n = height.size();

    vector<int>leftBar(n);
    vector<int>rightBar(n);
        
    // find value for the left bar

    leftBar[0] = height[0];

    for(int i=1; i<n; i++){
        leftBar[i] = max(leftBar[i-1],height[i]);
    }

    // find value for the Right bar

    rightBar[n-1] = height[n-1];

    for(int i=n-2; i>=0; i++){
        rightBar[i] = max(rightBar[i+1],height[i]);
    }

    int sum = 0;

     for(int i=0; i<n; i++){
       
    int gap = min(leftBar[i],rightBar[i])-height[i];
    sum=sum+gap;
     }

     return sum;
    }
};

// class Solution {
// public:
//     //total water is trapped into the bars
//     int trap(vector<int>& h) {
//         int l=0,r=h.size()-1,lmax=INT_MIN,rmax=INT_MIN,ans=0;
//         while(l<r){
//             lmax=max(lmax,h[l]);
//             rmax=max(rmax,h[r]);
//             ans+=(lmax<rmax)?lmax-h[l++]:rmax-h[r--];
//         }
//         return ans;
//     }
// };
