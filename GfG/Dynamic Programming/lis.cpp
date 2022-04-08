class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       vector<int> lis(nums.size(),0);
        int ans=0;
        lis[0]=1;
        for(int i=1;i<nums.size();i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    lis[i]=max(lis[i],lis[j]+1);
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            ans=max(ans,lis[i]);
        }
        return ans;
    }
};

// longest increasing subsequence , traverse from left to that element if the element is less than you account for that.
// maximum would be your ans. Maintain one dimensional dp array of size n;