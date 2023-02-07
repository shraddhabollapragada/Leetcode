class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size())
        {
            return false;
            //printf("case 1");
        }
        if(s.size()==0 && t.size()==0)
        {
            return true;
        }
        int s_index=0;
        for(int i=0; i<t.size();i++)
        {
            if(t[i]==s[s_index])
            {
                s_index++;
            }
            if(s_index==s.size())
            {
                return true;
            }
        }
        return false;
    }
};