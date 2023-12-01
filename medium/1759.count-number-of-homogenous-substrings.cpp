/*
 * @lc app=leetcode id=1759 lang=cpp
 *
 * [1759] Count Number of Homogenous Substrings
 */

// @lc code=start
class Solution {
public:
    int countHomogenous(string s) {
        long long continuous = 1;
        long long result = 1;

        // find all the homogenous substring
        for(int i = 1; i < s.length(); i++){
            if(s[i] == s[i - 1]){
                continuous++;
            }
            else{
                continuous = 1;
            }

            result += continuous;

            // if(homo.find(sub) == homo.end()){
            //     homo.insert(sub);

            //     int pos = s.find(sub, i - sub.length() + 1);
            //     while(s.find(sub, pos) != string::npos){
            //         result++;
            //         pos = s.find(sub, pos) + 1;
            //         // cout << "sub: " << sub << ", pos: " << pos << endl;
            //     }
            // }
        }

        // result += homo.size();

        // for(auto& it : homo){
        //     int pos = 0;
        //     // cout << "homo it: " << it << endl;
        //     while(s.find(it, pos) != string::npos){
        //         result++;
        //         pos = s.find(it, pos) + 1;

        //         // cout << "it: " << it << ", pos: " << pos << endl;
        //     }
        // }

        return result % (long long)(1e9 + 7);

    }
};
// @lc code=end

