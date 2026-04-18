class Solution {
public:
    bool isAnagram(string s, string t) {
        for(int i=0;i<s.size();i++){
            if(t.find(s[i])!=string::npos){
                t.erase(t.find(s[i]),1);
            }else{
                return false;
            }
        }

        return t.size()==0?true:false;
    }
};
