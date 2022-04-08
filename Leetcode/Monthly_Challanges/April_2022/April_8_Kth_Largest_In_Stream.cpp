class KthLargest {
private:
    priority_queue<int,std::vector<int>,std::greater<int>> minHeap;
    int len;
public:
    KthLargest(int k, vector<int>& nums) {
        len = k;
        for(int i=0;i<nums.size();i++){
            if(i<k){
                minHeap.push(nums[i]);
            }
            else if(i>=k && nums[i]>minHeap.top()){
                    minHeap.pop();
                    minHeap.push(nums[i]);                
            }           
        }
    }   
    int add(int val) {
        // make sure that your queue has all k elements 
        if(minHeap.empty()||minHeap.size()<len){
            minHeap.push(val);
        }
        else if(minHeap.top()<val){
            minHeap.pop();
            minHeap.push(val);
        }
        return minHeap.top();
    }

};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */