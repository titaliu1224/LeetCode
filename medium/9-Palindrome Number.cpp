class Solution {
public:
    bool isPalindrome(int x) {
        string strx = to_string(x);
        int odd = strx.size() % 2 ? 0 : 1; // 儲存size的奇偶狀態
        int middle = strx.size() / 2 - odd;
        
        for(int i = 0; i <= middle; ++i){
             if(strx[middle-i] != strx[middle+i+odd])
                 return false;
        }
        return true;
    }
};
