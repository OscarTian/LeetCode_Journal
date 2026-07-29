class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count=0;
        for(int i=0;i<ransomNote.size();i++)
        {
            for(int j=0;j<magazine.size();j++)
            {
                if(magazine[j]==ransomNote[i])
                {
                    count++;
                    magazine.erase(j,1);
                    break;
                }
            }
        }
        if(count==ransomNote.size())
            return true;
        return false;
    }
};

/* 最优解法
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int store[26] = {0};
        for(int a : magazine){
            store[a - 'a']++;
        }
        for(int a : ransomNote){
            store[a - 'a']--;
            if(store[a - 'a'] < 0){
                return false;
            }
        }
        return true;
    }
};
*/
