int minIncrements(vector<int>& arr) {
        // Code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int c=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=arr[i-1])
            {
                c+=arr[i-1]+1-arr[i];
                arr[i]=arr[i-1]+1;
            }
        }
        return c;
    }
