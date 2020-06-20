"""

Binary Search : 


There are two approaches here :
1) recursive solution 

2) Iterative : 

int searchInsert(vector<int>& nums, int target) 
    {
        //Use [low,high)
        int low=0;
        //Include the last element
        int high=nums.size();
        
        while(low<high)
        {
            int mid=low+(high-low)/2;
            
            if(nums[mid]==target)
                return mid;
            
            if(nums[mid]>target)
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }



"""

class Solution {
public:
    int BinarySearch(int low,int high,int target,vector<int>& nums)
    {
        if(low>high){
            return low;
        }
        // cout<<"low : "<< low <<" high : "<< high <<endl;
        int mid=(low+high)/2;
        // cout<<" mid : "<< mid<<endl;
        if(nums[mid]==target){
            return mid;
        }
        else if (nums[mid]>target)
        {
           return BinarySearch(low,mid-1,target,nums);
            
        }
        else{
          return  BinarySearch(mid+1,high,target,nums);
        }
    }
    int searchInsert(vector<int>& nums, int target) 
    {
        
        return BinarySearch(0,nums.size()-1,target,nums);
        
    }
};