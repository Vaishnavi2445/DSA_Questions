

class Solution {
public:

    int max_element(vector<int>& piles){
       sort(piles.begin(), piles.end());

       int x = piles.back();
    
    return x;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;  //1 -----> 1000000000 m
        long long right = max_element(piles);
        
        while(left <= right){
           long long mid = (left + right)/ 2; //k
            if(canEatInTime(piles, mid, h)) right = mid - 1;
            else left = mid + 1;
        }
        return left;
    }
    bool canEatInTime(vector<int>& piles, int k, int h){
        long long hours = 0;
        for(int pile : piles){
            int div = pile / k;
            hours += div;
            if(pile % k != 0) hours++;
            
        }
        return hours <= h;
    }
};
