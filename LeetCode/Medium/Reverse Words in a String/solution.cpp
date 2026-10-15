class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string word = "";
        string ans = "";

        int i = s.size() - 1;

        while(i >= 0) {

            if(s[i] != ' ') {
                word = s[i] + word;
            }
            else {
                if(word != "") {
                    v.push_back(word);
                    word = "";
                }
            }

            i--;
        }

        if(word != "") {
            v.push_back(word);
        }

        for(int i = 0; i < v.size(); i++) {
            ans = ans + v[i];

            if(i != v.size() - 1) {
                ans = ans + " ";
            }
        }

        return ans;
    }
};
