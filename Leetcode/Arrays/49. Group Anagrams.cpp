class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>M;
        vector<vector<string>>S;

        for(auto x:strs){
            string word = x;

            sort(word.begin(), word.end());
            M[word].push_back(x);
        }

        for(auto x:M){

            S.push_back(x.second);
        }

      return S;
    }
};
