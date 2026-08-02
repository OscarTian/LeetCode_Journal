class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size()==0)
            return ans;
        int left=nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]!=nums[i]+1)
            {
                if(left==nums[i])
                {
                    string s;
                    s=to_string(nums[i]);
                    ans.push_back(s);
                }
                else
                {
                    string s;
                    s=to_string(left)+"->"+to_string(nums[i]);
                    ans.push_back(s);
                }
                left=nums[i+1];
            }
        }
        if(left==nums[nums.size()-1])
        {
            string s;
            s=to_string(left);
            ans.push_back(s);
        }
        else
        {
            string s;
            s=to_string(left)+"->"+to_string(nums[nums.size()-1]);
            ans.push_back(s);
        }
        return ans;
    }
};
