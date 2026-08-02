class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                stack.push_back(s[i]);
            else if(s[i]==')'||s[i]==']'||s[i]=='}')
            {
                if(stack.size()==0)
                    return false;
                char temp=stack.back();
                if(s[i]==')')
                    if(temp!='(')
                        return false;
                if(s[i]==']')
                    if(temp!='[')
                        return false;
                if(s[i]=='}')
                    if(temp!='{')
                        return false;
                stack.pop_back();
            }
        }
        if(stack.size()!=0)
            return false;
        return true;
    }
};
