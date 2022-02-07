class Solution {
public:
    char findTheDifference(string s, string t) {
        // initialize the set
        set<int> pos; // record which letter in s haven't been used in t
        for(size_t i = 0; i < s.size(); ++i)
            pos.insert(i);
        
        for(size_t i = 0; i < t.size(); ++i){
            bool check = false;
            for(set<int>::iterator it=pos.begin(); it != pos.end(); ++it){
                if(t[i] == s[*it]){
                    check = true;
                    pos.erase(it);
                    break;
                }
            }
            
            // if the chatater is not in s
            if(!check)
                return t[i];
        }
        return t[0];
    }
};
