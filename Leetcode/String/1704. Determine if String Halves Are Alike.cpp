class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
       int  a = s.size();
       int b = a/2;

        for(int i=0; i<b; i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='O' || s[i]=='I' || s[i]=='U'){
                      count++;
            }
        }

        for(int i=b; i<a; i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='O' || s[i]=='I' || s[i]=='U'){
                       count--;
            }
        }

        if(count == 0){
            return true;
        }
        return false;
    }
};
