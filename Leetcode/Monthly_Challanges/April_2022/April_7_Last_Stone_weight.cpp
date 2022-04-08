class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> qp;
        
        for(int i=0;i<stones.size();i++){
            qp.push(stones[i]);
        }
        while(qp.size()>1){
            int top1 = qp.top();
            qp.pop();
            int top2 = qp.top();
            qp.pop();
            if(top1!=top2)
            {
                int ans = abs(top2-top1);
                qp.push(ans);
            }
        }
        if(qp.size()==1){
            return qp.top();
        }
        return 0;
    }
};