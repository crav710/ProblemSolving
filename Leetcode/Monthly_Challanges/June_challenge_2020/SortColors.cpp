"""
3 way partition algorithm ::
one pass solution :

0,0,0,1,1 ???, 2 ,2 

low - stating part for first partition ,mid-second ,high-last 

if 1 found then we do nothing 
if 0 then swap to low
if 2 swap with high 





"""


class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        
        while(mid<=high)
        {
            int temp=nums[mid];
            //cout<<"Temp: "<<temp<<" low "<<low<<" mid "<<mid<<" high "<<high<<endl;
            if(temp==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(temp==1){
                mid++;
            }
            else if (temp==2){
                swap(nums[mid],nums[high]);
                high--;
            }   
        }
    }
};