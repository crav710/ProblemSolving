class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        int index =-1;
        int n = nums.size();
        // step 1 find the local maxima point 
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else{
            // step 2 find the next largest prefix 
            int l=-1;
            for(int i=n-1;i>=0;i--){
                if(nums[i] > nums[index]){
                    l=i;
                    break;
                }
            }    
            swap(nums[index],nums[l]);
//            sort(nums.begin()+index+1,nums.end());
            // Reverse works as when finding the local manimum we skip the elementswhich are sorted. 
            //Also in finding the next greater we swap and still the sorted order is maintained. 
            reverse(nums.begin()+index+1,nums.end());
        }
     }
};