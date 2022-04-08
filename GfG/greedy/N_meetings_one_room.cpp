// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> vp;
        int prevEndTime=0;
        int ans=1;
        for(int i=0;i<n;i++)
        {
            vp.push_back({end[i],start[i]});
        }
        sort(vp.begin(),vp.end());
        prevEndTime = vp[0].start;
        for(int i=1;i<n;i++)
        {
            if(vp[i].start > preEndTime){
                ans++;
                preEndTime=vp[i].end;
            }
            
        }
        return ans;        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends