class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool> met;
        while(met.find(n)==met.end()&&n!=1)
        {
            met[n]=true;
            n=calc(n);
        }
        if(n==1)
            return true;
        return false;
    }
    int calc(int n)
    {
        int ans=0;
        while(n!=0)
        {
            ans+=(n%10)*(n%10);
            n=n/10;
        }
        return ans;
    }
};

/* 最优解法
class Solution {
public:
    int getSum (int n){
        int result = 0;
        while(n != 0) {
            result += (n % 10) * (n % 10);
            n /= 10;
        }
        return result;
    }
    bool isHappy(int n) {
        unordered_set<int> hsahSet;
        while(1) {
            int temp = getSum(n);
            if (temp == 1) {
                return true;
            }
            if (hsahSet.find(temp) != hsahSet.end()) {
                return false;
            }
            hsahSet.insert(temp);
            n = temp;
        }
    }
};
*/
