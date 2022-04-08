// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Step 1 
        vector<int> ls(n+1,-1),rs(n+1,n);
        stack<int> stk;
        
        for(int i=0;i<n;i++){
            // if the element on top is smaller than the next element push otherwise pop because that is 
            // going to be prev smallest now. 
            while(!stk.empty() &&  arr[i] <= arr[stk.top()]){
                stk.pop();
            }
            if(!stk.empty())
            {
                ls[i] = stk.top();
            }
            stk.push(i);
        }
        while(stk.empty()){
            stk.pop();
        }
        for(int i=n-1;i>=0;i--){
            // if the element on top is smaller than the next element push otherwise pop because that is 
            // going to be prev smallest now. 
            while(!stk.empty() &&  arr[i] <= arr[stk.top()]){
                stk.pop();
            }
            if(!stk.empty())
            {
                rs[i] = stk.top();
            }
            stk.push(i);
        }
        // Step2 
        vector<int> ans(n+1,0);
        vector<int> res;
        for(int i=0;i<n;i++){
            int len  = rs[i]-ls[i]-1;
            ans[len] = max(ans[len],arr[i]);  
            
        }
        // step3 
        for(int i=n-1;i>=1;i--){
                ans[i] = max(ans[i],ans[i+1]);
        }
        ans.erase(ans.begin());
        return ans ;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends