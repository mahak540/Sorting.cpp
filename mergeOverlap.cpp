class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;
        res.push_back(arr[0]);
        for(int i=1;i<arr.size();i++)
        {
            vector<int>& last=res.back();
            vector<int>& cur=arr[i];
            
            if(cur[0]<=last[1])
            last[1]=max(last[1],cur[1]);
            else
            res.push_back(cur);
        }
        return res;
    }
};
