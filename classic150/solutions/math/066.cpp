class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]+=1;
        if(digits.size()==1)
        {
            if(digits[0]==10)
            {
                digits.push_back(0);
                digits[0]=1;
            }
            return digits;
        }
        for(int i=digits.size()-1;i>0&&digits[i]==10;i--)
        {
            digits[i]=0;
            digits[i-1]+=1;
        }
        if(digits[0]==10)
        {
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
