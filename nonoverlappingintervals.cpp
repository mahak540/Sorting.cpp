static bool compare(vector<int> &a,vector<int> &b){
      return a[1]<b[1];
  }
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        int n=intervals.size();
        int count=0;
        sort(intervals.begin(),intervals.end(), compare);
        int end=intervals[0][1];
        
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<end)
            count++;
            else
            end=intervals[i][1];
        }
        return count;
        
    }
