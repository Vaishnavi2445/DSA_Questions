/*set is a C++ standard template library (STL) container that stores unique elements in a sorted order. In this case, it's used to store pairs of integers.

pair<int, int> is a data structure in C++ that holds two values of type int. In this context, it is used to store the frequency and the corresponding number.

greater<pair<int, int>> is a comparison function that is used to sort the set in descending order based on the first element of the pair (which is the frequency in this case). greater is a predefined functor in C++ that represents the greater-than comparison.
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap;
        for (int i = 0; i < nums.size(); i++) {
            frequencyMap[nums[i]]++;
        }

        set<pair<int, int>, greater<pair<int, int>>> freqSet;
        for (auto entry : frequencyMap) {
            freqSet.insert({entry.second, entry.first});
        }

        vector<int> ans;
        auto it = freqSet.begin();
        for (int i = 0; i < k; i++) {
            ans.push_back(it->second);
            it++;
        }

        return ans;
    }
};
