class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int biggestCommon = INT_MAX;
        int commonCount = -1;

        for (auto it : strs){
            commonCount = -1;
            for (int i = 0; i < it.length(); i++){
                if (it[i] == strs[0][i])
                    commonCount++;
                else
                    break;
            }

            if (commonCount < biggestCommon)
                biggestCommon = commonCount;
            if(biggestCommon == -1)
                return "";
        }

        return strs[0].substr(0, biggestCommon + 1);
    }
};
