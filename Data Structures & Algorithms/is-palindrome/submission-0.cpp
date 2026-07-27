#define ll long long
class Solution {
public:
    bool isPalindrome(string s) {
        ll n = s.length();
        vector<char>ss;
        for(ll i = 0;i<n;i++){
            if(isalnum(s[i])){
                ss.push_back(tolower(s[i]));
            }
        }
        vector<char> ss1;
        ss1 = ss;

        reverse(ss1.begin(),ss1.end());

        if(ss == ss1){
            return true;
        }
        return false;

        
    }
};
